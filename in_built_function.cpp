#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"enter a string : ";
    getline(cin,str);
    reverse(str.begin(),str.end());
    cout<<"sorted string is : "<<str;
}