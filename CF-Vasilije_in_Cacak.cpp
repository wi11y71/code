//2023-09-26 23:15:21
#include<bits/stdc++.h>
#define int long long
using namespace std;

int jingwie(float num){
    int tmp=num;
    if(tmp==num) return tmp;
    else return tmp+1;
}

vector<int> jw(vector<float> l){
    vector<int> re;
    int op=1;
    for(auto&i:l){
        int tmp = i;
        if(i>tmp){
            re.push_back(tmp+op);
            op *= -1;
        } 
            
        else re.push_back(tmp);
    }
    return re;
}

bool ck(vector<int>&v,int x){
    set<int> st(v.begin(),v.end());
    if(st.size()!=v.size()) return 0;

    int sum=0;
    if(v.at(0)<=0) return 0;
    for(auto i: v){
        sum += i;
    }
    if(sum!=x){
        bool op=1;
        for(int i=0,len=v.size();i<len-1;i++){
            if(v.at(i)+1 != v.at(i+1)){
                v.at(i)++;
                op=0;
                break;
            }
        }
        if(op) return 0;
    }

    return 1;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        float n,k,x; cin>>n>>k>>x;
        if(x>((n+n-k+1)*k/2)){
            cout<<"NO\n";
            continue;
        } 

        vector<float> l;
        if(x<=n)l.push_back(x);
        for(int i=0,len=jingwie(log2(k));i<len;i++){
            x /= 2.0;
            l.push_back(x);
        }
        l.push_back(x+1);

        vector<int> v =jw(l);

        sort(v.begin(),v.end());

        
        if(ck(v,x)) cout<<"YES\n";
        else cout<<"NO\n";
        //for(auto&i:v) cout<<i<<' ';
        //cout<<'\n';
    }

}