//2023-09-21 00:01:42
//https://codeforces.com/problemset/problem/546/B
#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;

    vector<int>v(n);
    for(auto&i : v) cin>>i;

    sort(v.begin(),v.end());

    int ans = 0, tmp=v.at(0);
    for(int i=1;i<n;i++){
        tmp++;
        if(v.at(i)<tmp){
            ans += abs (tmp - v.at(i));
        }
        else{
            tmp = v.at(i);
        }
    }    

    cout<<ans;
}