#include<bits/stdc++.h>
using namespace std;
void func(string s){
     int index=0;
        for(int i=0;i<s.size();i++){
            cout<<i<<" "<<index<<"\n";
            if(s[i]>='a'&&s[i]<='z'){
                s[index]=s[i];
                index++;
            }
            else if(s[i]>='A'&&s[i]<='Z'){
                s[index]=s[i]+32;
                index++;
            }
            else if(s[i]>='0'&& s[i]<='9'){
                s[index]=s[i];
                index++;
            }
        } 
        for(int i=0;i<index;i++){
            cout<<s[i];
        }
}
int main(){
     func("A man, a plan, a canal: Panama");
return 0;
}