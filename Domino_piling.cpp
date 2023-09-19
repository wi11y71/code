//2023-09-17 23:33:20
//https://codeforces.com/problemset/problem/50/A
#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m,ans=0; cin>>n>>m;

    ans += (n/2) * m;
    n %= 2;

    if(n){
        ans += (m/2);
    }

    cout<<ans;
}