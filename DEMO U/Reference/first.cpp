#include<iostream>
using namespace std;
int main(){
    int x=10;
    int &y=x;
    cout<<y<<endl;
    cout<<x<<endl;
    y++;
    x++;
    cout<<x<<endl;
    cout<<&x<<" "<<&y;
}