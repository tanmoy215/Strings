#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
   int n;
   cout<<"enter number  : ";
   cin>>n;
   string str = to_string(n);
   int size = str.size();
   cout<<"total Digit : "<<size;
}