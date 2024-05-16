#include<iostream>
using namespace std;
int main(){
    // int A[2][3]={2,3,4,5,6,6};
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<A[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int A[2][3]={{2,3,4},{5,6,7}};
    int B[2][3]={{7,4,5},{4,3,2}};
    int c[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
           c[i][j]= A[i][j]+B[i][j];
      
        }
    }
    for(int k=0;k<2;k++){
        for(int j=0;j<3;j++){
            cout<<c[k][j]<<" ";
        }
        cout<<endl;
    }
}