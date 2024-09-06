// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str = "leetcode";
//     int count=0;
//     int max_count = 0;
//     int ch=0;
//     for(int i=0;i<str.size();i++){
//         for(int j=i+1;j<str.size();j++){
//             if(str[i]==str[j]){
//                 count++;
//             }
//         }
//         if(max_count<count){
//             ch = i;
//             max_count=count;
//         }
//     }
//     cout<<"final ans is : "<<str[ch];
// }


        //important ans //

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v(26,0);
    string str = "tanmoy";
    for(int i=0;i<str.size();i++){
        int val = (int)str[i]-97;
        v[val]++;
    }
    int max = v[0];
    for(int i=0;i<v.size();i++){
        if(max<v[i]){
            max=v[i];
        }
    }
   for(int i=0;i<v.size();i++){
    if(v[i]==max){
        char ch = i+97;
        cout<<"final ans :  "<<ch<<endl;
    }
   }
}