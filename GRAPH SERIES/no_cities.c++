#include<bits/stdc++.h>
using namespace std;
void floyd(vector<vector<int>>&v,int n,int t){
    vector<vector<int>>dis(n,vector<int>(n,1e9));
    vector<int>ans(n,0);
    for(int j=0;j<n;j++){
        dis[j][j]=0;
    }
    for(auto node:v){
        int x=node[0],y=node[1],w=node[2];
        dis[x][y]=w;
        dis[y][x]=w;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<dis.size();j++){
            for(int k=0;k<dis.size();k++){
                if(dis[j][i]+dis[i][k]<dis[j][k]){
                    dis[j][k]=dis[j][i]+dis[i][k];
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(dis[i][j]<=t&& i!=j){
               ans[i]++;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<i<<":"<<ans[i]<<" ";
    }cout<<endl;
    pair<int,int>count={-1,n};
    for(int i=0;i<n;i++){
        if(ans[i]<count.second) {
            count={i,ans[i]}; 
    }
    else if(ans[i]==count.second){
        count={max(i,count.first),ans[i]};
    }
}
cout<<count.first;}
int main(){
    vector<vector<int>>v={{0,1,2},{1,2,3},{2,3,1},{3,4,1},{4,1,2},{4,0,8}};
    floyd(v,5,2); 
return 0;
}