//2023-10-02 20:46:46
//https://codeforces.com/problemset/problem/236/A
#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    string s; cin>>s;
    set<char>st;
    for(auto&i:s) st.insert(i);
    
    cout<<(st.size()%2 ? "IGNORE HIM!" : "CHAT WITH HER!");

}