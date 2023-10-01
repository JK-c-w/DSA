#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>ans;
// void  permute(vector<int>&v,vector<bool>&check,vector<int>&a){
//  if(a.size()==v.size()){
//     ans.push_back(a);
//     return ;
//  }
//  for(int i=0;i<v.size();i++){
//      if(!check[i]){
//           a.push_back(v[i]);
//           check[i]=true;
//           permute(v,check,a);
//           check[i]=false;
//           a.pop_back();
//      }
//  }  
// }
void permute(vector<int>&v,int i){
    if(i==v.size()){
        ans.push_back(v);
        return;
    }
    for(int j=i;j<v.size();j++){
        swap(v[i],v[j]);
        permute(v,i+1);
        swap(v[i],v[j]);
   }
} 
int main(){
     vector<int>v={1,2,3};
     vector<bool>check(v.size(),0);
     vector<int>a={};
     permute(v,0);
     vector<int>l;
     for(auto i:ans){
        for(auto j:i){
           l.push_back(j);
        }
    
     }
return 0;
}