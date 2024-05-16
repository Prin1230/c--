#include<iostream>
using namespace std;
int main(){
    int a[2][3]={2,4,5,6,7,4};
    for(auto &x:a){
    for(int y:x){
        cout<<y<<" ";
    }
    cout<<endl;
    }
}