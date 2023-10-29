//2023-10-02 20:21:51
//https://codeforces.com/problemset/problem/158/A
#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k,ans=0; cin>>n>>k;

    int a[n];
    for(auto&i:a) cin>>i;

    for(int i=0;i<n;i++){
        if(a[i]>=a[k-1] && a[i]>0) ans++;
    }
    cout<<ans;
}