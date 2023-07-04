#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
//! arry as a data member 
// class item{
//     int code[10];
//     int price[10];
//     public:
//     void set (int n){
//         for(int i=0;i<n;i++){
//             cin>>code[i];
//             cin>>price[i];
//         }
//     }
//     void display (int n){
//         for(int i=0;i<n;i++){
//             cout<<code[i]<<" ";
//             cout<<price[i]<<endl;
//         }
//     }
//     void del (int m,int n){
//         for(int i=0;i<n;i++){
//             if(code[i]==m)
//             price[i]=0;
//         }
       
//     }
//     int total (int n){
//         int sum=0;
//         for(int i=0;i<n;i++){
//          sum+=price[i];
//         }
//         return sum;
//     }
// };
// int main(){
//     int n;
//     cin>>n;
//     item i;
//     i.set(n);
//     i.display(n);
//     int m;
//     cin>>m;
//     i.del(m,n);
//     i.display(n);
//     cout<<i.total(n);
// }

//!array of object  
class emp{
    string name;
    int sal;
    public:
    void set (void){
        cin>>name;
        cin>>sal;

    }
    void display(void){
        cout<<name;
        cout<<sal;
    }
};
int main(){
    int n;
    cin>>n;
    emp e[n];
    for(int i=0;i<n;i++){
        e[i].set();
       
    }
    for(int i=0;i<n;i++){
         e[i].display();
    }
}