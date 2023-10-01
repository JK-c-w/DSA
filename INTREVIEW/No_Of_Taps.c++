#include<bits/stdc++.h>
using namespace std;
void taps(vector<int>&v,int n){
    vector<int>mat(n+1,0);
    for(int i=0;i<=n;i++){
        int l=i-v[i];
        int r=i+v[i];
        if(l<0){
            v[0]=max(v[0],r+1);
        }
        else{
            v[l]=max(v[l],(r-l)+1);
        }
    }
     if(v[0]==0) {
            cout<<"not possible";
            return;
        }
       if(v[0]>n){
        cout<<1;
        return ;
       } 
    for(int i=1;i<mat.size();i++){
        int num=v[i]+i-1;
        if(num==n)

    }
}
int main(){
     
return 0;
}