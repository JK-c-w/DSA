#include<bits/stdc++.h>
using namespace std;
void Bellman(vector<vector<int>>mat,int n,int s){
    vector<int>dis(n,1e8);  
    dis[s]=0;
    // BELLMAN-FORD ALGORITHM
    for(int i=0;i<n-1;i++){
         for(auto node:mat){
            int u=node[0],v=node[1],w=node[2];
            if(dis[u]+w<dis[v]&&dis[u]!=1e8){
                dis[v]=dis[u]+w;
            }
         }
    } //DETECTION OF NEGATIVE CYCLES 
    for(auto it:mat){
        int u=it[0];
        int v=it[1];
        int w=it[2];
        if(dis[u]!=1e8&&dis[u]+w<dis[v]) {
            cout<< -1;
            return ;}
    }
    for(auto it:dis){
        cout<<it<<" ";
    }
}
int main(){
     vector<vector<int>>dis={{1,2,-2},{2,3,-1},{3,1,2}};
     Bellman(dis,3,1);
return 0;
}