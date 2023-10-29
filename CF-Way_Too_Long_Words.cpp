//2023-10-02 19:36:11
//https://codeforces.com/problemset/problem/71/A
#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        if(s.size()>10){
            cout<<s.at(0)<<s.size()-2<<s.at(s.size()-1)<<'\n';
        }
        else cout<<s<<'\n';
    }

}