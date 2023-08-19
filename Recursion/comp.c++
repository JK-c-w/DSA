#include<bits/stdc++.h>
using namespace std;
  void snake(vector<vector<int>>& board) {
        int n=board.size(),b=1;
        vector<pair<int,int>>cells(n*n+1);
        vector<int>col(n);
        for(int i=0;i<n;i++)  col[i]=i;
        for(int row=n-1;row>=0;row--){
        for(auto c:col)
          cells[b++]={row,c};
        reverse(col.begin(),col.end());
        }
        vector<int>dis(n*n+1,-1);
        dis[1]=0;
        queue<int>q;
        q.push(1);
        while(!q.empty()){
          int curr=q.front();
          q.pop();
          for(int next=curr+1 ; next<=min(curr+6,n*n);next++){
             pair<int,int>cp=cells[next];
             int r=cp.first,c=cp.second;
             int des=board[r][c]!=-1?board[r][c]:next;
             if(dis[des]==-1){
                dis[des]=dis[curr]+1;
                q.push(des);}
           }}
        cout<< dis[n*n];  }        
int main(){
     vector<vector<int>>b= {{-1,-1,-1,-1,-1,-1},
                            {-1,-1,-1,-1,-1,-1},
                            {-1,-1,-1,-1,-1,-1},
                            {-1,35,-1,-1,13,-1},
                            {-1,-1,-1,-1,-1,-1},
                            {-1,15,-1,-1,-1,-1}};
 snake(b);
return 0;
}