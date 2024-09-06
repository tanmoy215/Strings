#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    // string  str;
    // getline(cin,str);
    // int n = str.size();
    // int len = str.length();
    // cout<<n<<endl<<len;
    string str="tanmoy";
    reverse(str.begin()+2,str.end()-1);
    cout<<str;

}