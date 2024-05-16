#include<bits/stdc++.h>
using namespace std;
// int main(){
//     string p="PRINCE RAJ IS ";
//     for(int i=0;p[i]!='\0';i++){
//         if(p[i]>=65 && p[i]<=90){
//             p[i]=p[i]+32;
//         }
       
//     }
//      cout<<p;
    
// }

//COUNT NUMBER OF VOWEL AND CONSO//
// int main(){
//     string p="how Many words";
//     int v=0,c=0,s=0;
//     for(int i=0;p[i]!='\0';i++){
//         if(p[i]=='A' || p[i]=='E' || p[i]=='I' ||p[i]=='O' ||p[i]=='U' ||p[i]=='a' || p[i]=='e' || p[i]=='i' ||p[i]=='o' ||p[i]=='u'){
//             v++;
//         }
//         else if(p[i]==' '){
//             s++;
//         }
//         else {
//             c++;
//         }
//     }
//     cout<<c<<endl;
//     cout<<v<<endl;
//     cout<<s<<endl;

// }
//
// int main() {
//     string s = "princep";
//     string p=s;
//     for(int i=)
//       reverse(s.begin(), s.end());
//     compare(s,p);
//     return 0;
// }
int main(){
  string p="madam";
  string q=" ";
  int pr=p.length();
  q.resize(pr);
  for(int i=0,j=pr-1;i<pr;i++){
    q[i]=p[j];
    j--;
  }
  q[pr]='\0';
  if(p.compare(q)==0){
    cout<<"palinde"<<endl;
  }
  else{
    cout<<"npt"<<endl;
  }
}