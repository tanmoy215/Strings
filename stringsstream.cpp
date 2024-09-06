#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    string str = "i am tanmoy  majee from moyna purba medinipur";
    stringstream ss(str);
    string temp;
    int count = 0 ;
    while(ss>>temp){
        cout<<temp<<endl;
        count++;
    }
    cout<<"total number of word : "<<count;
}