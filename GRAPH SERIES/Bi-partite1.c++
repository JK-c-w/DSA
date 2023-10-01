#include<bits/stdc++.h>
using namespace std;
void Bi(vector<vector<int>>g){
    vector<int>col(g.size(),-1);
    queue<int>q;
    q.push(0);
    col[0]=0;
    while(!q.empty()){
            int node=q.front();
            q.pop();
            int c=col[node];
            for(auto child:g[node]){
                if(col[child]==-1){ //not visted child
                  if(c==1)  
                    col[child]=0;
                  else 
                    col[child]=1;
                    q.push(child);  
                }
                else if(col[child]==c){ // visted  with same color
                    cout<<"NOT";
                    return ;
                }   
                else if(col[child]!=c){ //visted with diffrent color
                     continue;
                }   
        }}
        cout<< "yes";
        return ;
    }

int main(){
     vector<vector<int>>v={{1,2},{0,3},{0,4},{1,5},{2,5},{3,4}};
     Bi(v);
return 0;
}