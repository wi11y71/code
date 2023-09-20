//2023-09-21 01:43:41
//https://codeforces.com/problemset/problem/546/A
#include<bits/stdc++.h>
using namespace std;

signed main(){
    int k,n,w; cin>>k>>n>>w;
    int cnt = k * ((1+w)*w/2);
    int ans = cnt - n;
    cout<<(ans>0?ans:0);
}