// *********************************************BOOK**********************************************************

// Constructor is specical type of fucntion which have same name as class . 4 type of constroctore copy,default copy,default ,perameter
// if there is a no any constroctore define then compiler provide his own default constructore . if there is a any constructore ispresent then 
// not provide any constructore.
// no return type . must be public . 
// _________________________________ex___________________________________________
// class inte{
//     ---
//     ---
//     public:
//     inte(int x,int y);

// };

// inte int1=inte(1,2);//explicite call the constructore
// inte int1(2,3);//implicite call the constructore // shorthand methode
// _________________________________ex___________________________________________
// class inte{
//     ---
//     ---
//     public:
//     inte(int x,int y){ // inline constructore
//         x=m;
//         y=n;
//     }

// };
// _________________________________ex___________________________________________
// class inte{
//     ---
//     ---
//     public:
//     inte(inte&); // valid //reference to its own class // copy constructorr/


// };
// _________________________________ex___________________________________________
// class inte{
//     ---
//     ---
//     public:
//     inte(); // no argument .. default .. obj## like inte int1;
//     inte(int x,int y); // perameter .. obj## like inte int2(2,3);
//     inte(inte &i);// copy .. obj## like inte int3(int2); // pass whole obj .. and copy;

// };
// _________________________________complex number ex___________________________________________

#include <iostream>
#include<iomanip>
using namespace std;

// class comp {
//     float x, y;
// public:
//     comp() {}
//     comp(float m, float n) {
//         x = m;
//         y = n;
//     }
//     comp(int a) {
//         x = y = a;
//     }
//     friend comp sum(comp, comp);
//     friend void show(comp);
// };

// comp sum(comp c1, comp c2) {
//     comp c3;
//     c3.x = c1.x + c2.x;
//     c3.y = c1.y + c2.y;
    
//     return (c3);
// }

// void show(comp c) {
//     cout<< fixed << c.x << "i" << "+" << c.y << "j" << endl;
// }

// int main() {
//     float m, n;
//     cin >> m >> n;
//     comp co1(m, n);
//      // or define another constructor for this initialization
//     comp co3(2.0,3.0);
    
//     comp co5 = sum(co1, co3);
   
//     show(co5);
// }
// _________________________________bank_balance___________________________________________
class amount{
    long int p_amount;
    int y;
    float r;
    float r_val;
    public:
    amount(){}
    amount(long int p,int y,float r=0.12);
    amount(long int p,int y,int r);
    void display(void);
      void amount(long int p,int y,float r=0.12){
        p_amount=p;
        this->y=y;
        this->r=r;
        r_val=p_amount;
        for(int i=1;i<=y;i++){
            r_val*=(1.0+r);
        }
     }
     void fixed_dep(long int p,int y,int r){
        p_amount=p;
        this->y=y;
        this->r=r;
        r_val=p_amount;
        for(int i=1;i<=y;i++){
            r_val*=(1.0+float(r)/100);
        }
     }
     void display(void){
        cout<<p_amount<<y<<r_val<<r;
     }

};
int main(){
    amount fd1,fd2,fd3;
    long int p;
    int y;
    float r;
    int R;
    cin>>p>>y>>r;
    fd1=amount(p,y,r);
    cin>>p>>y>>R;
    fd2=amount(p,y,R);
    cin>>p>>y;
    fd3=amount(p,y);
    
    fd1.display();
    fd2.display();
    fd3.display();
}







// #include<iostream>
// using std::cout;
// using std::endl;
// class Test {
//  int i;
//  float j;
// public:
//  Test(int x = 0, int y =0) {
//  cout << "Constructor called\n";
//  i = x;
//  j = y;
//  cout<<i<<j<<endl;
//  cout<<x<<y<<endl;
//  }
// };
// int main() {
//  // Common mistake
//  // Test t0(); // This is considered as function declaration
//  Test t0;
//  Test t1 = Test();
//  Test *t2 = new Test();
//  Test t3(2, 3);
//  Test t4 = Test(2, 3);
//  Test *t5 = new Test(2, 3);
//  Test t6(2);
//  Test t7 = Test(2);
//  Test *t8 = new Test(2);
//  Test t9{};
//  Test t10 = Test{};
//  Test *t11 = new Test{};
//  Test t12{2, 3};
//  Test t13 = Test{2, 3};
//  Test *t14 = new Test{2, 3};
//  Test t15{2};
//  Test t16 = Test{2};
//  Test *t17 = new Test{2};
//  Test t18 = {2, 3};
//  Test t19 = {2};
//  Test t20 = {};
//  return 0;
// }
// #include<iostream>
// using std::cout;
// using std::endl;
// class Test {
//     int i;
// public:
//     Test(int i) {
//         this->i = i;
//     }
//     void print() {
//         cout << i << endl;
//     }
// };
// int main() {
//     Test t0;
//     t0.print();
//     Test t1(3);
//     t1.print();
//     return 0;
// }
// #include<iostream>
// using std::cout;
// using std::endl;
// class Test {
//     int i;
// public:
//     Test(int i = 0) {
//         this->i = i;
//     }
//     void print() {
//         cout << i << endl;
//     }
// };
// int main() {
//     Test t0;
//     t0.print();
//     Test t1(3);
//     t1.print();
//     return 0;
// }
// #include<iostream>
// using std::cout;
// using std::endl;
// class Test {
//     int i;
// public:
//     Test(int i) {
//         this->i = i;
//     }
//     void print() {
//         cout << i << endl;
//     }
// };
// int main() {
//     Test t0(3);
//     t0.print();
//     Test t1(t0);
//     t1.print();
//     return 0;
// }
// #include<iostream>
// using std::cout;
// using std::endl;
// class Test {
//     int i;
// public:
//     Test(const Test &t) {
//         this->i = t.i;
//     }
//     void print() {
//         cout << i << endl;
//     }
// };
// int main() {
//     Test t0;
//     t0.print();
//     Test t1(t0);
//     t1.print();
//     return 0;
// }
// #include<iostream>
// using std::cout;
// using std::endl;
// class Test {
//     int i;
// public:
//     Test(const Test &t) {
//         this->i = t.i * 2;
//     }
//     Test(int i = 0) {
//         this->i = i;
//     }
//     void print() {
//         cout << i << endl;
//     }
// };
// int main() {
//     Test t0; t0.print();
//     Test t1 = Test(3);
//     t1.print();
//     return 0; }
