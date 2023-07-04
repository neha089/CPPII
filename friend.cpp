#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
// class sam{
//     int a;
//     int b;
//     public:
//     sam(){
//         a=20;
//         b=20;
//     }
//     friend float sum(sam obj);
       
        
// };
// float sum(sam obj){
//     // return ((obj.a+obj.b)/2.0);
//     // return a+b;//! must use . operatore to acess the data member u can not directly access it;
// }
// int main(){
//     sam s;
//     cout<<sum(s);
// }


// class B;

// class A{
//     int x;
// public:
//     A(int a){x=a;}
//     friend int sum(A,B);
// };

// class B{
//     int x;
// public:
//     B(int a){x=a;}
//     friend int sum(A,B);
// };

// int sum(A p, B q){
//     int sum1=p.x+q.x;
//     return sum1;
// }

// int main(){
//     A p(10);
//     B q(20);
//     cout<<sum(p,q);
//     return 0;
// }
// #include <iostream>
// using namespace std;

// class B;

// class A{
//     int x;
// public:
//     A(int a){x=a;}
//     void di(void){
//         cout<<x;
//     }
//     friend void ex(A&,B&);
// };

// class B{
//     int x;
// public:
//     B(int a){x=a;}
//     void di(void){
//         cout<<x;
//     }
//     friend void ex(A&,B&);
// };

// void ex(A &p, B &q){
//     int temp;
//     temp=p.x;
//     p.x=q.x;
//     q.x=temp;
// }

// int main(){
//     A p(10);
//     B q(20);
//     ex(p,q);
//     p.di();
//     q.di();
//     return 0;
// }
// class MyClass2; // Forward declaration

// class MyClass1 {
// public:
//   void foo(MyClass2& obj2); // Method declaration
// };

// class MyClass2 {
// private:
//   int value;
// public:
//   MyClass2() : value(0) {}
//   friend void MyClass1::foo(MyClass2& obj2); // Friend declaration
// };

// void MyClass1::foo(MyClass2& obj2) {
//   obj2.value = 42; // Access private member of MyClass2
//   cout<<value;
// }

// int main() {
//   MyClass1 obj1;
//   MyClass2 obj2;

//   obj1.foo(obj2);

//   return 0;
// }
// class A; // Forward declaration

// class B {
// private:
//      int q;
// public:
//      friend void A::x(); // Friend declaration
// };

// class A {
// public:
//      B b;
     
//      void x() {
//           cout << q;
//      }
// };

// int main() {
//     A a;
//     a.x();
//      return 0;
// }
// class A; // Forward declaration

// class B {
// private:
//      int q;
// public:
//      friend void A::x(); // Friend declaration
// };

// class A {
// public:
//      B b;
     
//      void x(const ) {
//           cout << b.q; // Access q through the b member variable in this code MyClass replace with A and MyClass replace with B 
//      }
// };

// int main() {
//     A a(20);
//     x(&a);
//      return 0;
// }

// class B; // Forward declaration

// class A {
// public:
//     friend void B::foo(A & b); // Friend declaration
// private:
//     int x;
// };

// class B {
// public:
//     void foo(A & b) {
//         cout << b.x; // Access private member x of class A
//     }
// };

// int main() {B
//      A a;
//     b.foo(a);
//     return 0;
// } 


class B; // Forward declaration

class A {
public:
  void foo(B& b); // Method declaration
};

class B {
private:
  int value;
public:
  B() : value(0) {}
  friend void A::foo(B& b); // Friend declaration
};

void A::foo(B& b) {
//   obj2.value = 4; // Access private member of MyClass2
  cout <<b.value; // Print the value of obj2's private member
}

int main() {
  A a;
  B b;

  a.foo(b);

  return 0;
}
