//2023-09-20 00:59:46
#include<bits/stdc++.h>
#define int long long
#define F first
#define S second
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x; cin>>n>>x;

    vector<pair<int,int>> v(n);
    for(auto&i : v){
        int a,b; cin>>a>>b;
        a>b ? swap(a,b) : void();
        i = pair<int,int>(a,b);
    }
    sort(v.begin(),v.end());

    int l=v.at(0).F, r=v.at(0).S;
    for(int i=1;i<n;i++){
        if(v.at(i).F>l){
            l = v.at(i).F;
        }
        if(v.at(i).S<r){
            r = v.at(i).S;
        }
    }

    if(r<l) cout<<"-1";
    else if(l<=x&&x<=r) cout<<"0";
    else cout<<min(abs(x-l),abs(x-r));
}