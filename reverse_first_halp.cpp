#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
     string str;
     getline(cin,str);
     int hf = (str.size())/2;
    reverse(str.begin()+hf,str.end());
    cout<<str;
   
}