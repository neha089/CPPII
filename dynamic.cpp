#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include<cstring>
using namespace std;
// class s{
//     char *name;
//     int l;
//     public:
//     s(){
//         l=0;
//         name= new char [l+1];
//     }
//     s(char *ss){
//         l=strlen(ss);
//         name=new char [l+1];
//         strcpy(name,ss);
//     }
//     void display(void){
//         cout<<name;
//     }
//     void join(s &a,s &b)
//     {
//         l=a.l+b.l;
//         name=new char [l+1];
//         strcpy(name,b.name);
//         strcat(name,a.name);
//     }
// };
// int main(){
//     s s1("neha"),s2("patel"),s3("yogeshkumar"),s4,s5;
//     s1.display();
//     s2.display();
//     s3.display();
//     s4.join(s1,s2);
//     s5.join(s4,s3);
//     s4.display();
//     s5.display();
// }

#include <iostream>

using namespace std;

// class mat {
//     int **p;
//     int x, y;
// public:
//     mat(int m, int n) {
//         x = m;
//         y = n;
//         p = new int*[x];
//         for(int i = 0; i < x; i++) {
//             p[i] = new int[y];
//         }
//     }
//     void get(int i, int j, int v1) {
//         p[i][j] = v1;
//     }
//     int  &put(int i, int j) {
//         return p[i][j];
//     }
// };

// int main() {
//     int m1, n1, v1;
//     cin >> m1 >> n1;
//     mat a(m1, n1);
//     for(int i = 0; i < m1; i++) {
//         for(int j = 0; j < n1; j++) {
//             cin >> v1;
//             a.get(i, j, v1);
//         }
//     }
//     cout << a.put(1, 1) << endl;
//     return 0;
// }
// #include<iostream>
// using std::cout;
// using std::endl;
// class Test {
//     const int t;
//     int i;
// public:
//     Test(): i(3) {
//     }
//     void print() {
//         cout << i << " " << endl;
//     }
// };
// int main() {
//     Test t0;
//     t0.print();
//     return 0;
// }

// #include<iostream>
// using std::cout;
// using std::endl;
// class Test {
//     const int t;
//     int i;
// public:
//     Test(): i(3), t(i * 2) {
//     }
//     void print() {
//         cout << i << " " << t << endl;
//     }
// };
// int main() {
//     Test t0;
//     t0.print();
//     return 0;
// }
// #include<iostream>
// using std::cout;
// using std::endl;
// class Test {
//     const int t;
//     int i;
// public:
//     Test(int num): i(t * num), t(3) {
//     }
//     void print() {
//         cout << i << " " << t << endl;
//     }
// };
// int main() {
//     Test t0(5);
//     t0.print();
//     return 0;
// }
// #include<iostream>
// using std::cout;
// using std::endl;
// class Test {
//     int i;
//     int &ref;
// public:
//     Test(): ref(i), i(3) {
//         i = 50;
//         ref=3;
//     }
//     void print() {
//         cout << i << " " << ref << endl;
//     }
// };
// int main() {
//     Test t0;
//     t0.print();
//     return 0;
// }
// class person
// {
// int age;
// public:
// person(int x){age=x;}
// void display(){cout<<"Age="<<age;}
// person olderperson(person p)
// {
// if (age > p.age)
//   return *this; 
// else
//   return p;
// }
// };
// int main()
// {
// person r(35),h(30);
// person o=r.olderperson(h);
// o.display();
// }
class x{
    int *p;
    public:
        x(){
            p=int;
            *p=10;
        }
        x(int v){
            p=int;
            *p=v;
        }
        int d(void){
            return (*p);
        }
    };
    int main(){
        x x1;
        x x2(2);
        x1.d();
         x2.d();
    }
