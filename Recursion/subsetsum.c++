#include<bits/stdc++.h>
using namespace std;
void func(vector<vector<char>>&grid){
    int r=grid.size(),c=grid[0].size();
    int x=-1,y=-1,max_len=-1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            char c=grid[i][j];
            if(grid[i][j]='@'){
               x=i;
               y=j;
            }
            if(c>='a'&&c<='f')
             max_len=max(c-'a'+1,max_len);
        }}
        vector<int>start={0,x,y};
        queue<vector<int>>q;
        unordered_set<string>visted;
        visted.insert(to_string(0)+" " +to_string(x)+" "+to_string(y));
        q.push(start);
        int step=0;
        vector<vector<int>>dir={{-1,0},{1,0},{0,1},{0,-1}};
        while(!q.empty()){
            int size=q.size();
            for(int k=0;k<size;k++){
            vector<int>s=q.front();
            q.pop();
            if(s[0]==(1<<max_len)-1) {
                cout<<step;
              return;}
            for(auto &d:dir){
             int nx=s[1]+d[0];
             int ny=s[2]+d[1];
             int key=s[0];
             if(nx>=0 &&nx<r &&ny>=0&&ny<c){
                char c=grid[nx][ny];
                if(c=='#') continue;
                if(c>='a'&&c<='f') key|=1<<(c-'a');
                if(c>='A'&&c<='F'&&((key>>(c-'A'))&1)==0) continue;
             if(!visted.count(to_string(key)+" "+to_string(nx)+" "+to_string(ny))){
                visted.insert(to_string(key)+" "+to_string(nx)+" "+to_string(ny));
                q.push({key,nx,ny});
            }
            }
        } } step++;}
        cout<< -1;
    } 

int main(){
     vector<vector<char>>grid={{'@','.','a','.','.'},{'#','#','#','.','#'},{'b','.','A','.','B'}};
     func(grid);
return 0;
}