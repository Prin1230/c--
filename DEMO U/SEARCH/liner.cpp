#include<iostream>
using namespace std;
int main(){
    int p=984;
    int A[]={2,3,4,5,5,7};
    for(int x:A){
        if(A[x]==p){
            cout<<x<<endl;
            return 0;
        }
    }
    cout<<"nt";

}