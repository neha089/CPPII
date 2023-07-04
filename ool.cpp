#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include<exception>

using namespace std;
// class A{
//     int x,y;
//     public:
//     A(){}
//     A(int m,int n)
//     {
//         x=m;
//         y=n;
//     }
//     //  A operator+(A a){
//     //     A temp;
//     //     temp.x=x+a.x;
//     //     temp.y=y+a.y;
//     //     return temp;

//     // }
//     friend A operator+(A a,A i){
//         A q;
//         q.x=a.x+i.x;
//         q.y=a.y+i.y;
//         return q;
//     }
//      friend ostream & operator << (ostream& out,A  & c){
//         out<<c.x<<c.y;
//         return out;
//     }
//     A operator+(int c){
//         A temp;
//       temp.x=x+c;
//       temp.y=y+c;
//       return temp;
//     }
//     // friend   A  operator+(int o,A &a){
//     //     A temp;
//     //    temp.x= a.x+o;
//     //     temp.y=a.y+o;
//     //   return temp;
//     // }
    

// };

// int main(){
   
//     int m,n;
//     cin>>m>>n;
    
//      A b(m,n);
//     cin>>m>>n;
//      A c(m,n);
//     A d;
//     d=b+c;
//     cout<<d;
//     d=2+d;
//     cout<<d;
// }
// #include <iostream>
// using namespace std;
// //!
// class A {
//     int x, y;
// public:
//     A() {}
//     A(int m, int n) {
//         x = m;
//         y = n;
//     }
//     A& operator=(const A& other) {
//         if (this == &other) {
//             return *this;
//         }
//         cout<<"call op";
//         x = other.x;
//         y = other.y;
//         return *this;
//     }
//     friend ostream& operator<<(ostream& out, const A& c) {
//         out << c.x << " " << c.y;
//         return out;
//     }
// };

// int main() {
//     int m, n;
//     cin >> m >> n;

//     A a1(m, n);
//     A a2;
//     a2 = a1; // Using the overloaded assignment operator

//     A a3=a1; //copy constructore will be call

//     cout << a2 << endl;
//     cout<<a3<<endl;

//     return 0;
// }
// class A {
//     int x;
// public:
//     A(int val) : x(val) {}
//     friend  A operator=(A& obj){
//         A val;
//         obj.x = val.x; 
//         return val;

//     }
//      friend ostream& operator<<(ostream& out, const A& c) {
//         out << c.x ;
//         return out;
//     }
// };



// int main() {
//     A a1(10);
//     A a2(20);
//  a1=a2;
// cout<<a1<<endl;
// cout<<a2<<endl;
//     return 0;
// }
class a{
    float w,l;
    public:
    a(float x,float y){
        w=x;
        l=y;

    }
    operator float(){
        return (float)w*l;
    }
};
int main(){
    float x,y;
    cin>>x>>y;
    a A(x,y);
    float af;
    af=A;
    cout<<af;
}