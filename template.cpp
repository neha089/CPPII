#include <iostream>
using namespace std;

// template<typename T>
// T product(T num1, T num2) {
//     return num1 * num2;
// }

// int main() {

//     cout << product(2, 3) << endl;
//     cout << product(1.1f, 2.2f) << endl;
//     cout << product(1.1, 2.2) << endl;

//     return 0;
// }

// int main() {
//     cout << product(2, 3) << endl;
//     cout << product(1.1f, 2.2f) << endl;
//     // error: no matching function for call to ‘product(int, double)
//     // note: deduced conflicting types for parameter ‘T’ (‘int’ and ‘double’)
//     // cout << product(3, 4.5) << endl;
//     cout << product<int>(3, 4.5) << endl;
//     cout << product<float>(3, 4.5) << endl;
//     // string s1 = "Hello ", s2 = "world!\n";
//     // error: no match for ‘operator*’
//     // cout << product(s1, s2) << endl;

//     return 0;
// }
// template<typename T>
// T product(T num1, T num2) {
//     return num1 * num2;
// }
#include <iostream>

// template<typename T>
// T product(T num1, T num2); // Template function declaration

// int main() {
//     std::cout << product(2, 3) << std::endl;
//     std::cout << product(1.1f, 2.2f) << std::endl;
//     std::cout << product(1.1, 2.2) << std::endl;

//     return 0;
// }

// template<typename T>
// T product(T num1, T num2) { // Template function definition
//     return num1 * num2;
// }
// template<typename T>
// T product(T num1, T num2) {
//     cout << "Template function called\n";
//     return num1 * num2;
// }
// template<typename T>
// T product(T num1, T num2, T num3) {
//     cout << "template function with three argumets called\n";
//     return num1 * num2 * num3;
// }
// float product(float num1, float num2) {
//     cout << "Non-template function called\n";
//     return num1 * num2;
// }
// int product(int num1, int num2, int num3) {
//     cout << "Non-template function with three argumets called\n";
//     return num1 * num2 * num3;
// }
// int main() {
//     cout << product(2, 3) << endl;
//     cout << product(1.1f, 2.2f) << endl;
//     cout << product<float>(1.1f, 2.2f) << endl;
//     cout << product<>(1.1f, 2.2f) << endl;
//     cout << product(1.1, 2.2) << endl;
//     // Not an exact match
//     cout << product(1, 2, 3) << endl;

//     return 0;
// }
// template<typename T>
// T product(T num1, int num2, T num3) {
//     cout << "Template function called\n";
//     return num1 * num2 * num3;
// }

// int main() {

//     cout << product(2.5, 3, 2.5) << endl;

//     cout << product(2.5, '3', 2.5) << endl;

//     // error: no matching function for call to ‘product(double, double, int)’
//     // note: deduced conflicting types for parameter ‘T’ (‘double’ and ‘int’)
//     // cout << product(2.5, 3.5, 2) << endl;

//     return 0;
// }
// template<typename T2,typename T1 >
// T2 product(T2 num1, T2 num2, T1 num3) {
//     cout << "Template function called\n";
//     return num1 * num2 * num3;
// }

// int main() {

//     // error: no matching function for call to ‘product(double, int, double)’
//     // note: deduced conflicting types for parameter ‘T2’ (‘double’ and ‘int’)
//     cout << product<int>(2.5, 3, 2.5) << endl;

//     cout << product<int,int>(2.5, 3.5, 2.5) << endl;

//     cout << product<int,int>(2.5, 3.5, 2) << endl;

//     return 0;
// }
// template<typename T1>
// double average(T1 arr[], int n) {
//     double result;
//     for(int i = 0; i < n; i++) {
//         result += arr[i];
//     }
//     result /= n;
//     return result;
// }

// int main() {

//     float arr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

//     cout << average(arr, 5);

//     return 0;
// }
// template<typename T1, typename T2>
// T2 average(T1 arr[], int n) {
//     T2 result;
//     for(int i = 0; i < n; i++) {
//         result += arr[i];
//     }
//     result /= n;
//     return result;
// }

// int main() {

//     float arr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
//     // error: no matching function for call to ‘average(float [5], int)’
//     // couldn't deduce template parameter ‘T2’
//     cout << average<float,double>(arr, 5);

//     return 0;
// }
// template<typename T1, typename T2>
// T1 sum(T1 arg1, T2 arg2) {
//     return arg1 + arg2;
// }

// class Complex {
//     double re, im;
// public:
//     Complex(double re, double im) {
//         this->re = re;
//         this->im = im;
//     }
//     Complex operator+(Complex c) {
//         return Complex(re + c.re, im + c.im);
//     }
//     friend std::ostream& operator<<(std::ostream &, Complex);
// };

// std::ostream& operator<<(std::ostream& output, Complex c) {
//     output << "(" << c.re << ", " << c.im << ")";
//     return output;
// }int main() {
// // Content written in “” is taken as char pointer here is the pointer arithmetic case
//     std::cout << sum(1.2, 2) << std::endl;
//     std::cout << sum("Hello ", 2) << std::endl;
//     // error: no match for ‘operator+’
//     // std::cout << sum(string("Hello "), 2) << std::endl;
//     std::cout << sum<string,string>(("Hello "), ("world!"))
// 	    << std::endl;

//     Complex c1(1.1, 2.2), c2(3.3, 4.4);
//     std::cout << sum(c1, c2) << std::endl;

//     return 0;
// }
// template<typename T2 = int,typename T1=int>
// T1 sum(T1 arg1, T2 arg2 = 5.2) {
//     return arg1 + arg2;
// }

// int main() {

//     cout << sum(1.2) << endl;
//     cout << sum<double, double>(1.2) << endl;
//     cout << sum(1.2, 2.2) << endl;

//     return 0;
// }
// class StackOverflowException: public std::exception {
// public:
// virtual const char* what() const throw()
// {
//     return "StackOverflowException\n";
// }
// };
// class StackUnderflowException: private std::exception {
// public:
//     virtual const char* what() const throw()
//     {
//         return "StackUnderflowException\n";
//     }
// };
// template <typename T>
// class Stack
// {
//     T *arr;
//     int top;
//     int capacity;
// public:
//     Stack(int size) {
//         arr = new T[size];
//         capacity = size;
//         top = -1;
//     }
//     void push(T element) {
//         if(top == capacity - 1){
//             StackOverflowException so;
//             throw so;
//         }
//         arr[++top] = element;
//     }
//     T pop() {
//         if(top == -1){
// 	   StackUnderflowException su;
//             throw su;
//          }
//         return arr[top--];
//     }
//     ~Stack(){
//         delete [] arr;
//     }
// };
// int main()
// {
//     Stack<string> str_stack(3);
//     try {
//         str_stack.push(string("ABC"));
//         str_stack.push(string("PQR"));
//         str_stack.push(string("XYZ"));
//         str_stack.push(string("LMN"));
//         cout << str_stack.pop() << endl;
//         cout << str_stack.pop() << endl;
//         cout << str_stack.pop() << endl;
//     }
//     catch(std::exception &e) {
//         cout << e.what();
//     }
//     return 0;
// }
// template<typename T1, typename T2>
// T1 sum(T1 arg1, T2 arg2) {
//     return arg1 + arg2;
// }

// class Complex {
//     double re, im;
// public:
//     Complex(double re, double im) {
//         this->re = re;
//         this->im = im;
//     }
//     Complex operator+(Complex c) {
//         return Complex(re + c.re, im + c.im);
//     }
//     friend std::ostream& operator<<(std::ostream &, Complex);
// };

// std::ostream& operator<<(std::ostream& output, Complex c) {
//     output << "(" << c.re << ", " << c.im << ")";
//     return output;
// }int main() {
// // Content written in “” is taken as char pointer here is the pointer arithmetic case
//     std::cout << sum(1.2, 2) << std::endl;
//     std::cout << sum<string>("Hello ", 2) << std::endl;
//     // error: no match for ‘operator+’
//     // std::cout << sum(string("Hello "), 2) << std::endl;
//     // std::cout << sum(string("Hello "), string("world!"))
// 	//     << std::endl;
//     std::cout << sum<string,string>(("Hello "),("world!"));
// 	//     << std::endl;

//     Complex c1(1.1, 2.2), c2(3.3, 4.4);
//     std::cout << sum(c1, c2) << std::endl;

//     return 0;
// }
// template<typename T1, typename T2>
// T1 sum(T1 arg1,  int arg2 = 5) {
//     return arg1 + arg2;
// }

// int main() {
//     // error: no matching function for call to ‘sum(double)’
//     // note:   couldn't deduce template parameter ‘T2’
//     // cout << sum(1) << endl;
//     cout << sum<double,int>(1.2) << endl;
//     // cout << sum(string("Hello "), string("world!")) << endl;
//     cout<<sum<int,double>(4,10.1);
//     // could not convert ‘5’ from ‘int’ to ‘std::string’
//     // cout << sum<string, string>(string("Hello ")) << endl;

//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int ar[6] = {22, 5, 23, 43, 54, 65};
//     int *p, i;

//     p = ar;
//     i = *p++ - *p--;
//     cout << i;

//     return 0;
// }

// #include <iostream>

// using namespace std;

// class B
// {
//     float by;

// public:
//     B()
//     {
//         by = 15.5011;
//     }
//    virtual void show()
//     {
//         cout << by << endl;
//     }
// };

// class D : public  B
// {
//     float dr;
    
// public:
//     D()
//     {
//         dr = 10.0;
       
//     }
//     void show()
//     {
//         cout << dr << endl;
//     }
// };

// int main()
// {
//     B ob, *ptr;
//     D obl;
//     ptr = &ob;
//     cout << sizeof(*ptr) << endl;
//     ptr = &obl;
//     cout << sizeof(*ptr) << endl;
//     return 0;
// }
// #include <iostream>

// class Base {
//     char a,b;
//     virtual void func() {}
// };

// class Derived : public Base {
    
//     void func()  {}
// };

// int main() {
//     Base bo;
//     Derived derivedObj;
//     Base* basePtr;
//     basePtr = &bo;
//     basePtr = &derivedObj;
//     Derived* derivedPtr = &derivedObj;

//     std::cout << "Size of base class pointer: " << sizeof(basePtr) << " bytes" << std::endl;
//     std::cout << "Size of derived class: " << sizeof(Derived) << " bytes" << std::endl;
  
//     return 0;
// }
// #include<iostream>
// #include<string>
// #include<iomanip>

// using std::cin;
// using std::cout;
// using std::endl;
// using std::string;
// using std::fixed;
// using std::setprecision;

// #define PI 3.14

// /* write your code here */
// class Shape{
//     public:
//     Shape(){}
//     virtual  double area()=0;
//     virtual double peri()=0;
// };
// class Square:public Shape{
//     double x;
//     public:
//     Square(double m){
//         x=m;
//     }
//     double area(){
//         return x*x;
//     }
//     double peri(){
//         return 4*x;
//     }
    
// };
// class Rectangle:public Shape{
//     double x,y;
//     public:
//     Rectangle(double m, double n){
//         x=m;
//         y=n;
//     }
//     double area(){
//         return x*y;
//     }
//     double peri(){
//         return 2*(x+y);
//     }
// };
// class Circle:public Shape{
//     double x;
//      public:
//     Circle(double r){
//         x=r;
//     }
//     double area(){
//         return PI*x*x;
//     }
//     // double peri(){
//     //     return 2*PI*x;
//     // }
    
// };

// int main() {
    
//     int n;
//     cin >> n;

//     Shape **sp = new Shape*[n];

//     char shape_type;
//     double num1, num2;
//     for(int i = 0; i < n; i++) {
//         getchar();
//         cin >> shape_type;
//         switch(shape_type) {
//             case 'S':
//                 cin >> num1;
//                 sp[i] = new Square(num1);
//                 break;
//             case 'R':
//                 cin >> num1 >> num2;
//                 sp[i] = new Rectangle(num1, num2);
//                 break;
//             case 'C':
//                 cin >> num1;
//                 sp[i] = new Circle(num1);
//                 break;
//         }
//     }

//     for(int i = 0; i < n; i++) {
//         cout << fixed << setprecision(2);
//         cout << sp[i]->area() << " ";
//         cout << sp[i]->peri() << endl;
//     }

//     return 0;
// }#include <iostream>

// class MyClass {
// private:
//     int data;

// public:
//     MyClass(int value) : data(value) {}

//     void printData() {
//         std::cout << "Data: " << data << std::endl;
//     }

//     void swapData(MyClass* other) {
//         int temp = data;
//         data = other->data;
//         other->data = temp;
//     }
// };

// int main() {
//     MyClass obj1(5);
//     MyClass obj2(10);

//     std::cout << "Before swapping:" << std::endl;
//     obj1.printData();
//     obj2.printData();

//     obj1.swapData(&obj2);

//     std::cout << "After swapping:" << std::endl;
//     obj1.printData();
//     obj2.printData();

//     return 0;
// }
// #include <iostream>

// class Sorter {
// public:
//     virtual void sort(int arr[], int size) {
//         cout<<"base";
//         // Base implementation sorts in descending order
//         for (int i = 0; i < size - 1; i++) {
//             for (int j = 0; j < size - i - 1; j++) {
//                 if (arr[j] < arr[j + 1]) {
//                     int temp = arr[j];
//                     arr[j] = arr[j + 1];
//                     arr[j + 1] = temp;
//                 }
//             }
//         }
//     }
// };

// class AscendingSorter : public Sorter {
// public:
//     void sort(int arr[], int size) override {
//         // Override the sort method to sort in ascending order
//         for (int i = 0; i < size - 1; i++) {
//             for (int j = 0; j < size - i - 1; j++) {
//                 if (arr[j] > arr[j + 1]) {
//                     int temp = arr[j];
//                     arr[j] = arr[j + 1];
//                     arr[j + 1] = temp;
//                 }
//             }
//         }
//     }
// };

// int main() {
//     int arr[] = { 5, 2, 8, 1, 9, 3 };
//     int size = sizeof(arr) / sizeof(arr[0]);

//     Sorter* sorter = new Sorter();
//     sorter->sort(arr, size);

//     std::cout << "Array sorted in descending order: ";
//     for (int i = 0; i < size; i++) {
//         std::cout << arr[i] << " ";
//     }
//     std::cout << std::endl;

//     AscendingSorter ascendingSorter;
//     Sorter* virtualSorter = &ascendingSorter;
//     virtualSorter->sort(arr, size);

//     std::cout << "Array sorted in ascending order: ";
//     for (int i = 0; i < size; i++) {
//         std::cout << arr[i] << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }
// #include <iostream>

// int factorial(int n) {
//     if (n == 0 || n == 1) {
//         return 1;
//     } else {
//         return n * factorial(n - 1);
//     }
// }

// int main() {
//     int num;
//     std::cout << "Enter a number: ";
//     std::cin >> num;

//     int (*factorialPtr)(int) = &factorial;
//     int result = factorialPtr(num);

//     std::cout << "Factorial of " << num << " is " << result << std::endl;

//     return 0;
// }
// template<class A,  B>
// #include<iostream>
// #include<iomanip>
// using std::cin;
// using std::cout;
// using std::endl;
// class Complex {
//     float real, imaginary;
// public:
//     Complex(float real, float imaginary) {
//         this->real = real;
//         this->imaginary = imaginary;
//     }
//     void print() {
//         cout << std::fixed << std::setprecision(2);
//         cout << real << " " << imaginary << endl;
//     }
//     Complex operator*(float num) {
//         this->real *= num;
//         this->imaginary *= num;
//         return *this;
//     }
// };
// int main() {
//     Complex c1(1.1, 2.2);
//     // will be evaluated as (c1 * 2) * 3
//     // c1 * 2 will return Complex object
//     c1 * 3*2;
//     c1.print();
//     return 0;
// }
// template<typename T=int>
// void product(T num1, int num2) {
//     cout <<"t";
    
// }
// template<typename T1 , typename T2>
// void product(T1 num1, T2 num2) {
//     cout << "template function called\n";
    
// }
// void product(int num1=9, int num2=8) {
//     cout << "Non-template function with three argumets called\n";
// ;
// }
// int main() {
//      product(2, 3) ;
//      product(1, 2.2) ;
//      product(1.1, 2) ;
//      product() ;
//      product(1) ;
//     // Not an exact match
//      product(1.1, 2.2) ;

//     return 0;
// }
#include <iostream>
using namespace std;

class Shape {
protected:
    int LineStyle;
    int FillColour;

public:
    virtual void draw() {
        cout << "Shape";
    }
};

class Circle : public Shape {
private:
    int Radius;
    int CentrePoint;

public:
    void draw() {
        cout << "Circle is drawn";
    }
};

int main() {
    Shape SomeShape;
    Shape* PorShape;
    Circle Ring;
    
    SomeShape.draw();  // Output: Shape
    Ring.draw();       // Output: Circle is drawn

    PorShape = &Ring;
    PorShape->draw();  // Output: Circle is drawn

    return 0;
}
