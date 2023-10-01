#include<bits/stdc++.h>
using namespace std;
void bfs(vector<vector<int>>&g,vector<int>&in){
    cout<<"\n";
    queue<int>q;
    int j=0;
    while(j<in.size()){
     for(int i=0;i<in.size();i++){
        if(in[i]==0){
            q.push(i);
            j++;} 
     } while(!q.empty()){
        int node=q.front();
        q.pop();
        for(auto child : g[node]){
             in[child]--;
        }
        in[node]--;
        cout<<node<<" ";
     }
}}
void sort(vector<vector<int>>&g){
    vector<int>in(g.size());
    for(int i=0;i<g.size();i++){
        for(auto node :g[i]){
            in[node]++;
        }
    }
     bfs(g,in);

}
int main(){
     vector<vector<int>>v={{1},{4,},{3,5},{4},{},{1},{0}};
     sort(v);
return 0;
}