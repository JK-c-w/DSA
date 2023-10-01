#include<bits/stdc++.h>
using namespace std;
bool dfs(int node,vector<bool>&vis,vector<bool>&path,vector<vector<int>>&g){
    vis[node]=true;
    path[node]=true;
    for(auto child :g[node]){
        if(!vis[child]){
             if(dfs(child,vis,path,g))
              return true;
        }
        else if(path[child]==true) {return  true;}
    }
    path[node]=false;
    return false;
}
void detectCycle(vector<vector<int>>&g){
    vector<bool>vis(g.size(),false);
    vector<bool>path(g.size(),false);
    for( int node=0;node<g.size();node++){
        if(!vis[node]){
            if(dfs(node,vis,path,g)){
               cout<<"DETECTED";
               return ;}
        }
    } cout<<"NOT DETECTED";
}
int main(){
     vector<vector<int>>v={{1,3},{2},{},{2}};
     detectCycle(v);
return 0;
}