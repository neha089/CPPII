#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
// class time{
//     int min;
//     int hr;
//     public:
//     time(){}
//     time(int m,int h){
//         min=m;
//         hr=h;
//     }
//     void display(void){
//         cout<<min<<" "<<hr<<endl;
//     }
//     void sum(time *t1,time *t2){
//         min=t1.min+t2.min;
//         hr=min/60;
//         min=min%60;
//         hr=hr+t1.hr+t2.hr;
//     }
// };
// int main(){
//     int m,h;
    
//     cin>>m>>h;
//     time T1(m,h);
//     cin>>m>>h;
//     time T2(m,h);
//     time T3;
//     T3.sum(&T1,&T2);
//     T1.display();
//     T2.display();
//     T3.display();
// }
//! important 
// #include <iostream>
// using namespace std;

// class MyClass {
// public:
//     int x;
//     MyClass(int n) : x(n) {}
// };

// void func(MyClass obj) {
//     obj.x++;
//     cout << "Inside func: " << obj.x << endl;
// }

// int main() {
//     MyClass obj(5);
//     func(obj);
//     cout << "Inside main: " << obj.x << endl;
//     return 0;
// }
// //!important 
// #include <iostream>
// using namespace std;

// class MyClass {
// public:
//     int x;
//     MyClass(int n) : x(n) {}
// };

// void func(MyClass obj) {
//     obj.x++;
//     cout << "Inside func: " << obj.x << endl;
// }

// int main() {
//     MyClass obj(5);
//     func(obj);
//     cout << "Inside main: " << obj.x << endl;
//     return 0;
// }
class matrix{
    int m[3][3];
    public:
    void set(void){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>m[i][j];
            }
        }
    }
    void display(void){
        for(int i=0;i<3;i++){
            cout<<endl;
            for(int j=0;j<3;j++){
                cout<<m[i][j]<<" ";
            }
        }
    }
    friend  matrix trans(matrix mx);

    
    
};
matrix trans(matrix mx){
    matrix n;
    for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                n.m[i][j]=mx.m[j][i];
            }
        }
        return (n);
    }

int main(){
    matrix m1;
    matrix m2;
    m1.set();
    m1.display();
    m2=trans(m1);
    m2.display();
}