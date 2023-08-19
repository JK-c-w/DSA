#include<bits/stdc++.h>
using namespace std;
vector<vector<long long>>comb;
int mod=1e9+7;
long long co(int n ){
    long long a=1;
    // cout<<"a";
    while(n>0){
      a*=n%mod;
      n--;
    } 
    return a%mod;
}
long long func(vector<int>&g){
    int n=g.size();
     if(n<=2) return 1;
     vector<int>l,r;
     for(int j=1;j<n;j++){
        if(g[j]<g[0])l.push_back(g[j]);
        if(g[j]>g[0])r.push_back(g[j]);
     }
     long long left=func(l);
     long long right=func(r);
      int len=l.size();
    //   return((comb[n-1][len] *left)%mod*right)%mod;
    long long a=co(n-1),b=co(len),c=co(n-1-len);
    return ((((a/(b*c))*left)%mod)*right)%mod;

 }
void combination(vector<int>&g){
    int n=g.size();
    comb.resize(n+1);
    for(int i=0;i<n+1;i++){
        comb[i]=vector<long long>(i+1,1);
        for(int j=1;j<i;j++){
            comb[i][j]=(comb[i-1][j-1]+comb[i-1][j])%mod;
        }
    }
    long long ans=func(g);
    cout<<(ans%mod-1)%mod;
    
}
int main(){
 vector<int>g={3,4,5,1,2};
cout<<func(g)-1%mod;    
return 0;
}