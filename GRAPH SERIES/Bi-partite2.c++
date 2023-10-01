#include<bits/stdc++.h>
using namespace std;
bool bi(vector<vector<int>>&g,vector<int>col,int n,int c){
     col[n]=c;
     for(auto child:g[n]){
        if(col[child]==-1){
            if(!bi(g,col,child,!c))
               return false;
        }
        else if(col[child]==c)
           return false;
     }
   return true;
}
int main(){
    vector<vector<int>>v={{1,2},{0,3},{0,4},{1,5},{2,5},{3,4}};
    vector<int>col(v.size(),-1);
    if(bi(v,col,0,0)) cout<<"YES";
    else cout<<"NO";
    
return 0;
}