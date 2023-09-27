//2023-09-23 20:37:35
//https://codeforces.com/contest/1873/problem/G
#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin>>T;
    while(T--){
        string s; cin>>s;

        int tmp=0; vector<int> p;
        for(auto&i:s){
            if(i=='A') tmp++;
            else{
                p.push_back(tmp);
                tmp=0;
            }
        }
        p.push_back(tmp);

        int ans=0,mn=INT_MAX;
        for(auto&i:p){
            ans += i;
            mn = min(mn,i);
        }
        ans -= mn;
        cout<<ans<<'\n';
    }

}