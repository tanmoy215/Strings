#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"enter string : ";
    cin>>str;
    int len = str.size();
    int n = len/2;
    cout<<str.substr(n);
}