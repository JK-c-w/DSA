#include<bits/stdc++.h>
using namespace std;
void floyd(vector<vector<int>>&g,int n){
    vector<vector<int>>dis(n,vector<int>(n,1e9));
   for(int i=0;i<n;i++){
    dis[i][i]=0;
   }
   for(auto line:g){
     int x=line[0],y=line[1],w=line[2];
     dis[x][y]=w;
     dis[y][x]=w;
   } 
   // FLOYD WARSHALL ALGORITHM
    for(int i=0;i<n;i++){
        for(int j=0;j<dis.size();j++){
            for(int k=0;k<dis.size();k++){
                if(dis[j][i]+dis[i][k]<dis[j][k]){
                    dis[j][k]=dis[j][i]+dis[i][k];
                }
            }
        }
    } 
    // DETECTION OF NEGATIVE CYCLES
    // for(int i=0;i<n;i++){
    //     if(dis[i][i]<0) {
    //         cout<<"NEGATIVE CYCLE";
    //         return ;}
    // }
    // cout<<"NOT PRESENT";
    
    for(int j=0;j<dis.size();j++){
        for(int k=0;k<dis.size();k++){

            if(dis[j][k]==1e9) dis[j][k]=-1;
          cout<<dis[j][k]<<" ";
        } cout<<endl;
    };
}
int main(){
     vector<vector<int>>g={{0,1,2},{1,2,3},{2,3,1},{3,4,1},{4,1,2},{4,0,8}};
     floyd(g,5);
return 0;
}