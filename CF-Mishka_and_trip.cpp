//2023-09-23 11:48:36
//https://codeforces.com/problemset/problem/703/B
#include<bits/stdc++.h>
//#define int int

using namespace std;

void sol(){
    int n,k; cin>>n>>k;
    
    vector<int>c(n,0);
    for(auto&i:c) cin>>i;
    set<int> capital;
    for(int i=0;i<k;i++) {
        int a; cin>>a; a--;
        capital.insert(a);
    } 


    int g[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            g[i][j] = 1;
        }
    }
    for(int i=0;i<n;i++){
        if(capital.count(i)){
            for(int j=0;j<n;j++){
                if(j!=i){
                    g[i][j] = 1;
                    g[j][i] = 1;
                } 
            } 
        }
        else{
            g[i][(i+1)>=n ? 0 : i+1]  = 1;
            g[i][(i-1)<0 ? n-1 : i-1] = 1;
        }
    }
    
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
                if(g[i][j] == -1) continue;
                //if(mark[i][tmp]) continue;

                ans += c.at(i) * c.at(j);
                //cout<<i+1<<' '<<j+1<<':'<<c.at(i) * c.at(j)<<'\n';
                g[i][j] = -1;
                g[j][i] = -1;
                
            }
    }
    cout<<ans;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sol();

}
