#include<bits/stdc++.h>
using namespace std;
int dfs(int add){
    if(add==0)return 0;
    int x=int(sqrt(add));
    int count=INT_MAX;
    for(int i=1;i<=x;i++){
          int y=add-(i*i);
          count=min(count,dfs(y)+1);
    } return count;
}
void ps(int n){
    int x=int(sqrt(n));
    vector<pair<int,int>>vis;
    for(int i=1;i<=x;i++){
       int add=n-(i*i);

    }
}
int main(){
     cout<<dfs(12);
return 0;
}