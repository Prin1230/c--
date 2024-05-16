#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="prince raj is don";
    int count=0;
   string::iterator it;
   for(it=s.begin();it!=s.end();it++){
    count++;
   }
   cout<<count;
}