#include<iostream>
using namespace std;
int main()
{
    int A[6]={2,4,6,8,10,12};
    int *p=A;
    int *q=&A[4];
    // int **q=&p;
    // cout<<q-p;
    cout<<p;
    // for(int i=0;i<6;i++){
    //     cout<<*p<<endl;
    //     cout<<p<<endl;
    //    p++;
    // }

//     cout<<*p<<endl;
//     p=p+3;
//     cout<<p<<endl;
//     cout<<*p<<endl;
    
//     cout<<p[-3]<<endl;
    
    // p=p+3; // pointer will be pointing on 10
    
    // cout<< p[-4];   // complete this statement to print 2 without moving pointer
}