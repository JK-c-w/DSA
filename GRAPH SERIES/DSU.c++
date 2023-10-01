#include<bits/stdc++.h>
using namespace std;
vector<int>parent(1e8);
vector<int>ranky(1e8);
int path_compression(vector<int>&p,int n){
    if(p[n]==n){
       return n;
    }
    p[n]=path_compression(p,p[n]);
}
void Union(vector<vector<int>>&v,int n){
    for(int i=0;i<n;i++){
        parent[i]=i;
    }
    for(auto node:v){
        int u=node[0],v=node[1];
        int pu=parent[u],pv=parent[v];
        int ru=ranky[pu],rv=ranky[pv];
        if(ru>rv) {
         parent[v]=u;
         if(pu!=u) ranky[pu]++;
         ranky[u]++;
    }
    else{
        parent[u]=v;
        if(pv!=v) ranky[pv]++;
        ranky[v]++;
    }
}for(int i=0;i<n;i++) 
path_compression(parent,i);
}
bool DSU(int n,int m){
    if(parent[n]==parent[m]) return true;
    return false;
}
int main(){
     vector<vector<int>>v={{1,2},{1,3},{4,5},{4,6},{6,7}};
     Union(v,8);
     cout<<DSU(1,7);
return 0;
}