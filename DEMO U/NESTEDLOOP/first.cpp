#include<iostream>
using namespace std;
int main(){

    // for(int i=1;i<4;i++){
    //     for(int j=1;j<4;j++){
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
        if(i>=j){
            cout<<"*";
        }
        }
        cout<<endl;
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
        if(i>j){
            cout<<"";
        }
        else{
            cout<<"*";
        }
        }
        cout<<endl;
    }
}