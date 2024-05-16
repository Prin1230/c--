#include<iostream>
using namespace std;
int main(){
    int A[7]={2,3,4,5,6,7,8};
    int key=5;
    int high,low,mid;
    low=0;
    high=7-1;
    while(low<=high){
        mid=(low+high)/2;
        if(A[mid]>key){
            high=mid-1;
        }
        else if(A[mid]<key){
            low=mid+1;
        }
        else{
            cout<<"Element mila ispe "<<mid<<endl;
            return 0;
        }
    }
    cout<<"nhi mila be"<<endl;

}