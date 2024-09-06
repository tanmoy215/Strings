#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(){
   string s="abab";
   string t="davs";
   if(s.size()!=t.size()) cout<<"false";
   vector<int>v(150,1000);
   for(int i=0;i<s.size();i++){
    int idx = (int)s[i];
    if(v[idx]==1000) v[idx]=s[i]-t[i];
    else if(v[idx]!=s[i]-t[i]) {
        cout<<"false";
        break;
    }
    else cout<<"true";
   }
   for(int i=0;i<150;i++)
   v[i]=1000;
   for(int i=0;i<t.size();i++){
    int jdx = (int)t[i];
    if(v[jdx]==1000) v[jdx]=t[i]-s[i];
    else if(v[jdx]!=t[i]-s[i]){
     cout<<"false";
     break;
    }
    else cout<<"true";
   }
}