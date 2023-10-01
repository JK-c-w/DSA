#include<bits/stdc++.h>
using namespace std;
void top(vector<pair<int,int>>m[],stack<int>&st,int s,vector<bool>&vis){
    vis[s]=1;
    for(auto node:m[s]){
        if(!vis[node.first]){
           top(m,st,node.first,vis);}
    }
    st.push(s);
}  
vector<int>shordistance(int N,int M,vector<vector<int>>&g){
  vector<int>dis(N,1e9);
  dis[0]=0;
  stack<int>st;
  vector<bool>vis(N,false);
   vector<pair<int,int>>m[N];
  for(int i=0;i<M;i++){
      m[g[i][0]].push_back({g[i][1],g[i][2]});
  }
  for(int i=0;i<N;i++){
     if(!vis[i]){
     top(m,st,i,vis);}
  } 
  while(!st.empty()){
    int node=st.top();
    st.pop();
    for(auto child:m[node]){
       if(dis[node]+child.second<dis[child.first]){
          dis[child.first]=dis[node]+child.second;
       }
    }
  } return dis;
}
int main(){
     vector<vector<int>>g={{0,1,2},{0,4,1},{1,2,3},{4,2,2},{2,3,6},{4,5,4},{5,3,1}};
     vector<int>dis=shordistance(6,7,g);
     for(auto i:dis){
        cout<<i<<" ";
     }
return 0;
}