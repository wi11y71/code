//2023-09-20 23:49:37
//https://codeforces.com/problemset/problem/610/A
#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    if((n%2)){
        cout<<0;
        return 0;
    }
    n >>= 1;
    
    int dis = (!(n%2));

    cout<<n/2-dis;

}
