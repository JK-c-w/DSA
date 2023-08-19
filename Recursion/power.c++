#include<bits/stdc++.h>
using namespace std;
void func(string s){
   int ans=0;
   unordered_map<char,int>f;
   for(int i=0;i<s.size();i++){
       f[s[i]]++;
   }
   for( char ch1='a';ch1<='z';ch1++){
       for(char ch2='a';ch2<='z';ch2++){
          if(ch1==ch2||f[ch1]==0||f[ch2]==0) continue;
          for(int i=0;i<=1;i++){
            int c1=0,c2=0;
          for(auto ch:s){
              c1+=ch==ch1;
              c2+=ch==ch2;
              if(c1<c2) c1=c2=0;
              if(c1>0 && c2>0)
                ans=max(ans,c1-c2);
          }cout<<"ans:"<<ans;
          reverse(s.begin(),s.end());}
       }
   }cout<<ans;
}
int main(){
    func("aababbb");
return 0;
}