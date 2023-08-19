#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<int>v={1,2,3,5,4,1,3,2,4,7};
   int x=0;
   for(int i=0;i<v.size();i++)  
     x^=v[i];
   int c=0;
   while(x){
     if(x&1) break;
    c++;
    x=x>>1; 
   } 
   int a=0,b=0;
   for(int i=0;i<v.size();i++){
     if(v[i]>>c&1)
       a^=v[i];
     else 
      b^=v[i];  
   }  cout<<a<<" "<<b;

return 0;
}