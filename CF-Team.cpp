//2023-10-02 20:12:36
//https://codeforces.com/problemset/problem/231/A
#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,ans=0; cin>>n;

    for(int i=0;i<n;i++){
        int a,b,c; cin>>a>>b>>c;
        if(a+b+c>=2) ans++;
    }
    cout<<ans;
}