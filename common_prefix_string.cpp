#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(){
   vector<string> str{"flower","flight","flow"};
   int n = str.size();
   if(n==1) cout<<str[0];
    sort(str.begin(),str.end());
    string first = str[0];
    string last = str[n-1];
    string s="";
    for(int i=0;i<max(first.size(),last.size());i++){
        if(first[i]==last[i]){
            s+=first[i];
        }
    }
    cout<<"Common prefix string : "<<s;
}