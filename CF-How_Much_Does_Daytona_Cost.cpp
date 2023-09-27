//2023-09-26 22:50:44
//https://codeforces.com/contest/1878/problem/A
#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        int n,x; cin>>n>>x;
        vector<int>v(n);
        for(auto&i:v) cin>>i;

        bool op=0;
        for(auto i : v){
            if(i == x) {
                op=1;
                break;
            }
        }
        cout<<(op ? "YES\n":"NO\n");
    }

}