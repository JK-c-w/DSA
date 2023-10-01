#include<bits/stdc++.h>
using namespace std;
void func(vector<int>&v){
    int n=v.size();
    vector<int>ans;
    for(int i=0;i<n;i++){
        ans.push_back(i+1);
    }
    for( auto i:ans){
        cout<<i<<" ";
    }

    }

int main(){
     vector<int>v={10000};
     func(v);
return 0;
}