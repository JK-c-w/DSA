#include<bits/stdc++.h>
using namespace std;
void large(int arr[],int s){
//    sort(arr,arr+s);
//    cout<<arr[s-2];
 int m=arr[0];
 int small=arr[0];
 for(int i=1;i<s;i++){
    if(m<arr[i]) {
        small=m;
        m=arr[i];
    }
 }
  cout<<small;
}
int main(){
     int arr[]={2,4,5,6,8};
     large(arr,5);
return 0;
}