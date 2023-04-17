// in cpp the main function return the int value to the o.p system
// int main(int argc , char *  argv[])
// argc=num of the argument 
// argv= arguments
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstdarg>
using namespace std;
// void swap(int &a, int &b){ // call by reference
//     int t;
//     t=a;
//     a=b;
//     b=t;
// }

// int main(){
//     int a,b;
//     cin>>a>>b;
//     swap(a,b);
//     cout<<a<<b;
// }
// function using ellipse
    //// erroe haii  
//     int max(int c,...){
    
//     va_list arg;
//     va_start(arg,c);
//     int m=va_arg(arg,int);
    
//     for(int arg=0;arg<c;arg++){
//         if(va_arg(arg,int)>m)
//         m=va_arg(arg,int);

//     }
//     va_end(arg);
//     return m;
    
// }
// int main(){
//     cout<<max(3,1,2,3)<<endl;
//     cout<<max(5,2,6,4,3,9);
// }
// int &max(int &a,int &b){
//     if(a>b)
//     return a;
//     else
//     return b;
// }
// int main(){
//     int n,m;
//     cin>>n>>m;
//     //cout<<max(n,m);
//     if(max(n,m)%2==0){
//         max(n,m)*=2;
//     }
//     else
//     max(n,m)+=1;

//     cout<<max(n,m);
// }
// tower of hnoi
// void toh(int n,char srs,char help,char dest)
// {
// if(n==0)
//   return;
//   else
//   {
//     toh(n-1,srs,dest,help);
//     cout<<"move to the "<<srs<<"to the"<<help<<endl;
//     toh(n-1,dest,help,srs);
//   }
// }
// int main(){
//     int n;
//     cin>>n;
//     toh(n,'A','B','C');
// }
