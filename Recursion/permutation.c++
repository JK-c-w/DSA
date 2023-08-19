#include<bits/stdc++.h>
using namespace std;
int func(map<pair<int,int>,int>&dp,int prev,int i, vector<int>&a1, vector<int>&a2){
    if(i==a1.size()) return 0;
    if(dp.find({i,prev})!=dp.end()) return dp[{i,prev}];
    int ans=INT_MAX/2;
    int id=upper_bound(a2.begin(),a2.end(),prev)-a2.begin();
    if(prev<a1[i]){ans=min(ans,func(dp,a1[i],i+1,a1,a2));
       cout<<i<<" not take:"<<ans<<" ";}
    if(id<a2.size()){ans=min(ans,func(dp,a2[id],i+1,a1,a2)+1);
     cout<<i<<" REp:"<<ans;}
     cout<<endl;
    return dp[{i,prev}]=ans;
}

int main(){
     vector<int>a1={1,5,3,6,7};
     vector<int>a2={1,2,3,4};
     map<pair<int,int>,int>dp;
     sort(a2.begin(),a2.end());
     int ans=func(dp,INT_MIN,0,a1,a2);
     cout<<ans;
  
return 0;
}