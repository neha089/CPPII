#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include<exception>

using namespace std;

//  template <class T>
//   T pro(T a, T b);
//  int main(){
//  int a,b;
//     // cin>>a>>b;
//     cout<<pro<float>(2.8,3.5);
//  }
//  template <class T>
//  T pro(T a, T b){
//     return a*b;
//  }

// template <typename T>
// void swap1(T &x, T &y){
//     T temp;
//   temp=x;
//   x=y;
//   y=temp;
// }
// int main(){
//     int a=2, b=3;
//    swap1(a,b);
//    cout<<a<<b;
//    float a1=10.110 ,b1=20.12;

//    swap1(a1,b1);
//     cout<<a1<<b1;
//     char a2='A',b2='B';
// swap1(a2,b2);
//     cout<<a2<<b2;
//     string s1="neha" ,s2="patel";
//     swap1(s1,s2);
//     cout<<s1<<s2;

// }
template<typename T>
T sum(T a,T b){
    cout<<"T";
    return a+b;
}
int sum(int a , int b){
    cout<<"nt";
    return a+b;
}
float sum(int a , int b,int c){
     cout<<"nt";
    return a+b+c;
    }
    int main(){
        cout<<sum(2,3)<<endl;
        cout<<sum(3.4 , 3.5)<<endl;
        cout<<sum(1,2,3)<<endl;
        cout<<sum(1.1 , 2.2 ,3.3)<<endl;
        cout<<sum('A','B')<<endl;
        cout<<sum(1.2f,1.2f);
        string s1="neha", s2="patel";
        cout<<sum(s1,s2)<<endl;
    }