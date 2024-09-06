#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
 string str;
 cout<<"enter a string : ";
 getline(cin,str);
 int n = str.size();
  int i=0;
  int count=0;
  while(i<n){
    if(n==1) break;
    if(n==2 && str[0]!=str[1]){
        count=1;
        break;
    }
    if(i==0){
        if(str[i]!=str[i+1]){
            count++;
        }
    }
    else if(i==n-1){
        if(str[i]!=str[i-1]){
            count++;
        }
    }
   else if(str[i]!=str[i-1] && str[i]!=str[i+1]) {
        count++;
  }
  i++;
  }
  cout<<"total different character : "<<count;
 }