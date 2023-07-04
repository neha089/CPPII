// #include <iostream>
// using namespace std;

// class A {
// public:
//     int num1;
//     float flt1;
//     A(int n = 0, float f = 1.1) {
//         num1 = n;
//         flt1 = f;
//     }
//     void print() {
//         cout << "A:" << num1 << " " << flt1 << endl;
//     }
//     void set_values(int n, float f) {
//         num1 = n;
//         flt1 = f;
//     }
// };

// class B: protected A {
//     int num2;
//     float flt2;
// public:
//     B(int n = 0, float f = 1.1) {
//         num2 = n;
//         flt2 = f;
//     }
//     void print() {
//         cout << "B:" << num1 << " " << flt1 << " ";
//         cout << num2 << " " << flt2 << endl;
//     }
//     void set_values(int n, float f) {
//         num2 = n;
//         flt2 = f;
//     }
// };
// int main() {
//     A a(1, 2.2), *a_p = &a;
//     B b(3, 4.4), *b_p = &b;
//     cout << "Size of one A object : " << sizeof(a) << endl;
//     cout << "Size of one B objects: " << sizeof(b) << endl;

//     a_p->print();
//     b_p->print();

//     a = b; // Object slicing
//     //b = a; // error
//     cout << "After a = b;\n";
//     a_p->print();
//     b_p->print();

//     b.A::set_values(6, 7.7);
//     cout << "After b.A::set_values(6, 7.7);\n";
//     a_p->print();
//     b_p->print();

//     a_p = b_p; //upcast
//     //b_p = a_p; // error - downcast
//     //b_p = (B *)a_p; //would work but must be avoided
//     cout << "After a_p = b_p;\n";
//     a_p->print();
//     b_p->print();

//     cout << a_p->num1 << " " << a_p->flt1 << endl;
//     // Error
//     //cout << a_p->num2 << " " << a_p->flt2 << endl;

//     return 0;
// }
#include<iostream>
class B {
protected:
   
public:
 int i;
    B(int i = 0) {
        this->i = i;
    }
};
class D: public B {
public:
    void print() {
        std::cout << i;
    }
    void print(B &b) {
        // error: ‘int B::i’ is protected within this context
        // Methods of class D can access
        // protected members of class B,
        // only if B object is part of object of D
        std::cout << b.i;
    }
};
int main() {
    D d;
    B b(5);
    d.print();
    d.print(d);
    return 0;
}
