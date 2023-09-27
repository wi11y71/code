//2023-09-26 19:48:40
//https://codeforces.com/problemset/problem/1660/A
#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
        int a,b; cin>>a>>b;
        int sum = a + 2*b;

        if(a == 0) cout<<"1\n";
        else cout<<sum+1<<'\n';
    }

}