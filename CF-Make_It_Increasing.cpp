//2023-09-20 00:13:44
//https://codeforces.com/problemset/problem/1675/B
#include<bits/stdc++.h>
#define int long long
using namespace std;

bool ck(vector<int> v){
    bool op=0;
    for(int i=1,len=v.size();i<len;i++){
        if(v.at(i) <= v.at(i-1)) {
            op = 1;
            break;
        }
    }
    return op;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin>>T;
    be:
    while(T--){
        int n; cin>>n;

        vector<int> v(n);
        for(auto&i : v) cin>>i;

        int ans = 0;

        for(int i=1;i<n;i++){
            if(v.at(i)<i){
                cout<<"-1\n";
                goto be;
            }
            else if(v.at(i)<=v.at(i-1)){
                ans++;
                v.at(i-1) /= 2;
            }
        }
        if(ans==0){
            cout<<"0\n";
            continue;
        }

        while(ck(v)){
            for(int i=1;i<n;i++){
                if(v.at(i)<=v.at(i-1)){
                    ans++;
                    v.at(i-1) /= 2;
                }
                else if(v.at(i) < i){
                    cout<<"-1\n";
                    goto be;
                }
            }
        }
        cout<<ans<<'\n';

    }

}

