//2023-09-23 20:48:56
//https://codeforces.com/contest/1873/problem/E
#include<bits/stdc++.h>
#define int long long
using namespace std;

bool check(vector<int>v,int h,int x){
    int sum=0;
    for(auto&i:v){
        sum += (h-i>0 ? h-i : 0);
    }
    return sum<=x;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        int n,x; cin>>n>>x;
        vector<int>v(n);
        for(auto&i:v) cin>>i;

        int l=-1,r = 1e10;
        while(l!=r-1){
            int mid = (l+r)>>1;

            if(check(v,mid,x)){
                l=mid;
            }
            else{
                r=mid;
            }
        }
        cout<<l<<'\n';
    }
}