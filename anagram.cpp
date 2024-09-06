#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str = "PhysicsWallah";
    string sttr = "WallahPhysics";
    sort(str.begin(),str.end());
    sort(sttr.begin(),sttr.end());
    if(str==sttr) cout<<"true";
    else cout<<"false";
}