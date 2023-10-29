//2023-10-27 22:09:02
//Author:Wi11y
#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define all(i) i.begin(),i.end()
#define F first
#define S second
#define pii pair<int,int>
#define left(i) ((i<<1)+1)
#define right(i) ((i<<1)+2)
using namespace std;

int n,m;
vector<int>v,r,f;

void mt(int l=0,int r=n-1,int id=0){
    if(l == r) return f.at(id) = v.at(l), void();

    int mid = (l+r)>>1;
    
    mt(l,mid,left(id));
    mt(mid+1,r,right(id));

    return f.at(id) = max(f.at(right(id)), f.at(left(id))), void();
}

int fd(int num,int l=0,int r=n-1,int id=0){
    
    if(l==r){
        if(v.at(l)>=num) return l;
        else return -1;
    }

    int mid = (l+r)>>1;

    if(f.at(id)>=num){
        if(f.at(left(id))>=num) return fd(num,l,mid,left(id));
        else return fd(num,mid+1,r,right(id));
    }
    else return -1;
}

void modify(int i,int num,int l=0,int r=n-1,int id=0){
    if(l==r) return f.at(id) -=num, void();

    int mid = (l+r)>>1;

    if(l<=i&&i<=mid) modify(i,num,l,mid,left(id));
    else modify(i,num,mid+1,r,right(id));

    return f.at(id) = max(f.at(right(id)), f.at(left(id))), void();
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n>>m;

    v.resize(n); r.resize(m); f.resize(4*n);
    for(auto&i:v) cin>>i;
    for(auto&i:r) cin>>i;

    mt();
    for(auto&i:r){
        int tmp=fd(i);
        cout<<tmp+1<<' ';
        if(tmp!=-1) modify(tmp,i);
    }
}