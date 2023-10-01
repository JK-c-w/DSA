#include<bits/stdc++.h>
using namespace std;
vector<int>top;
void dfs(vector<vector<int>>&g,int s,vector<bool>&vis){
  vis[s]=1;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
  for(auto child:g[s]){
    if(!vis[child]){
        dfs(g,child,vis);
    }
  } top.push_back(s);
  return;
}
 void Sort(vector<vector<int>>&g){
    vector<bool>vis(g.size());
    for(int i=0;i<g.size();i++){
        if(!vis[i]) dfs(g,i,vis);
    }
    reverse(top.begin(),top.end());
    for(auto i:top){
        cout<<i<<" ";
    }
 }
int main(){
     vector<vector<int>>v={{1},{4},{3,5},{4},{},{1},{0}};
     Sort(v);
return 0;
}