#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str = "i am tanmoy majee from moyna purba medinipur";
    int count = 0;
    for(int i=0;i<str.size();i++){
        if((int)str[i] == 32){
            cout<<endl;
            count++;
        }
        else cout<<str[i];
    }
    cout<<"total number of word : "<<count+1;
}