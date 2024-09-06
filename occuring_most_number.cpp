#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
 int main(){
    string str = "i am tanmoy majee i i i 1 1 1 1 2 2 2 2 2";
    string temp;
    stringstream ss(str);
    vector<string> v;
    
    while (ss>>temp)
    {
     v.push_back(temp);
    }
 sort(v.begin(),v.end());
  int maxw = 1;
  int count = 1;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        maxw=max(maxw,count);
    }
      int b=1;
      for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) b++;
        else b=1;
        if(b == maxw) cout<<"right ans is : "<<v[i]<<endl;
    }
     }