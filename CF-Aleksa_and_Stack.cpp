//2023-09-26 23:00:33
//https://codeforces.com/contest/1878/problem/B
#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        
        vector<int>ans={1,3};
        for(int i=2;i<n;i++){
            int j =ans.back()+1;
            while((3*j % (ans.at(i-1)+ans.at(i-2)))==0){
                j++;
            }
            ans.push_back(j);
        }

        for(auto i : ans) cout<<i<<' ';
        cout<<'\n';
    }

}