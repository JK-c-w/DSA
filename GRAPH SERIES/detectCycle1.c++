#include<bits/stdc++.h>
using namespace std;
 bool dfs(vector<vector<int>>&g,vector<bool>&vis,int node,int p){
    // if(node==g.size()) return false ;
    vis[node]=true;
    for(auto child:g[node]){
        if(!vis[child]){
          if(dfs(g,vis,child,node)==true) return true;}
        else if(child!=p&&vis[child]==true)
           return true;  
    } return false;
 }
 void detectCycle(vector<vector<int>>&g){
    vector<bool>vis(g.size(),false);
    bool ans=false;
    for(int node=0;node<g.size();node++){
            if(!vis[node]){
              if(dfs(g,vis,node,-1)==true) {
                cout<<"DETECTED";
               return ;}
        }
    } cout<<"NOT DETECTED";
 }                     
int main(){
     vector<vector<int>>v={{1},{0,2},{1,3},{2,4},{3}};
     detectCycle(v);
return 0;
}