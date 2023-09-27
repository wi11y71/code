//2023-09-22 22:51:31
//https://codeforces.com/problemset/problem/1215/B
#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    vector<int> v(n);
    vector<int>p;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        v.at(i) = (a>0 ? 1:-1);
    }
    for(int i=0;i<n;i++){
        if(v.at(i)==-1) p.push_back(i);
    }
    

    vector<pair<int,int>> ans(n,pair<int,int>(0,0));//negative/positive
    int tmp=0;
    for(int i=0;i<n;i++){
        if(v.at(i)==-1) tmp++;
        if(tmp%2){
            ans.at(0).first++;
        }
        else{
            ans.at(0).second++;
        }
    }


    for(int i=1;i<n;i++){
        
        if(v.at(i-1)==-1){
            if(v.at(i)==1){
                ans.at(i).first = ans.at(i-1).second;
                ans.at(i).second=ans.at(i-1).first-1;
            }
            else{
                ans.at(i).first =ans.at(i-1).second;
                ans.at(i).second=ans.at(i-1).first-1;
            }
        }

        else{
                ans.at(i).first = ans.at(i-1).first;
                ans.at(i).second=ans.at(i-1).second-1;
        }
    }
    
    int sum1=0,sum2=0;
    for(auto&i:ans){
        //cout<<i.first<<' '<<i.second<<'\n';
        sum1 += i.first;
        sum2 += i.second;
    }
    cout<<sum1<<' '<<sum2;
}