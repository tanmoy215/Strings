#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    vector<string> str{"0123","0023","456","00182","940","2901"};
    vector<int> v;
    for(int i=0;i<str.size();i++){
        int hy = stoi(str[i]);
        v.push_back(hy);
    }
    int max = v[0];
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(max<v[j]){
                max=v[j];
            }
        }
    }
    cout<<"Maximum value of a given string : "<<max;
}