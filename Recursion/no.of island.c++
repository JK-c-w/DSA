#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>d={{-1,0},{1,0},{0,1},{0,-1}};
int func(vector<vector<int>>&mat,int r,int c,vector<vector<bool>>&vis){
  if(mat[r][c]==0)return;
  vis[r][c]=true;
  for(int i=0;i<d.size();i++){
    for(int j=0;j<2;j++){
        int nr=r+d[i][j],nc=c+d[i][j];
        if(mat[nr][nc]!=0&&!vis[nr][nc]){
            func(mat,nr,nc,vis);
        }
    }
  }
}
int fun(vector<vector<int>>&mat){
    vector<vector<bool>>vis;
    int r=mat.size(),c=mat[0].size();
    int n=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(mat[i][j]!=0&&!vis[i][j]){
                func(mat,i,j,vis);
                n++;
            }
        }
    } return n;

}
int main(){
   vector<vector<int>>mat={{1,1,0,0,0},{1,1,0,0,0},{0,0,1,0,0},{0,0,0,1,1}};
     cout<<fun(mat);
     
return 0;
}