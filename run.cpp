#include <iostream>
using namespace std;
// class B {
// protected:
// B() { cout << "B "; }
// ~B() { cout << "~B "; }
// };

// class C : public B {
// public:
// C() { cout << "C "; }
// ~C() { cout << "~C "; }
// };

// class D : private C {
// // C var;
// public:
// C var;
// D() { cout << "D " << endl; }
// ~D() { cout << "~D "; }
// };

// int main() {
// D d;
// return 0;
// }
// class B {
// protected:
// B() { cout << "B "; }
// ~B() { cout << "~B "; }
// };

// class C : public B {
// protected:
 
// public:
// int data=100;
// C() { cout << "C "; }
// ~C() { cout << "~C "; }
// };

// class D : private C {
// C var;
// public:
// D() { cout << "D " << endl; }
// ~D() { cout << "~D "; }
// void change_data();
// void print();
// };
// int main() {
// D d;
// d.change_data();
// d.print();
// return 0;
// }
// void D:: change_data()  
//    {
//         data=100;  //update the data of inherited C
//         var.data=500; //ERROR: access not allowed
//     }
//   void D:: print()
//     {
//         cout<<endl<<data<<endl;
//         cout<<var.data<<endl; //ERROR: access not allowed
//     }
// class Vehicle {
//     int wheels_count;
// protected:
//     float max_speed;
// public:
//     string manufacturer;
//     Vehicle(int, float, string);
//     void print(bool);
//     friend void friend_fun1();
// };
// Vehicle::Vehicle(int wheels_count, float max_speed,
//     string manufacturer):
// wheels_count(wheels_count),
// max_speed(max_speed),
// manufacturer(manufacturer){
//     cout << "Vehicle constructor called\n";    
// }
// void Vehicle::print(bool in_single_line) {
//     if(in_single_line) {
//         cout << wheels_count << " " << max_speed;
//         cout << " " << manufacturer << endl;
//     }
//     else {
//         cout << wheels_count << endl << max_speed;
//         cout << endl << manufacturer << endl;
//     }
// }
// class Automobile : public Vehicle{
//     float engine_cc;
// protected:
//     int gear_count;
// public:
//     friend void friend_fun2();
//     Automobile(int wheels_count, float max_speed,
//         string manufacturer, float engine_cc,
//         int gear_count):
//     engine_cc(engine_cc),
//     gear_count(gear_count),
//     Vehicle(wheels_count, max_speed, manufacturer) {
//         cout << "Automobile constructor called\n";
//     }
//     void print() {
//         Vehicle::print(false);
//         cout << engine_cc << endl << gear_count << endl;
//     }
// };
// void friend_fun1() {
//     cout << "friend_fun1 called\n";
//     Automobile automobile(2, 100, "Honda", 125, 4);
//     cout << automobile.wheels_count << endl;
//     cout << automobile.max_speed << endl;
//     cout << automobile.manufacturer << endl;
//     // error: 'float Automobile::engine_cc' is private
//     // cout << automobile.engine_cc << endl;
//     // error: 'int Automobile::gear_count' is protected
//     // cout << automobile.gear_count << endl;
// }

// void friend_fun2() {
//     cout << "friend_fun2 called\n";
//     Automobile automobile(2, 100, "Honda", 125, 4);
//     // error: 'int Vehicle::wheels_count' is private
//     // cout << automobile.wheels_count << endl;
//     cout << automobile.max_speed << endl;
//     cout << automobile.manufacturer << endl;
//     cout << automobile.engine_cc << endl;
//     cout << automobile.gear_count << endl;
// }

// int main() {
//     friend_fun1();
//     friend_fun2();
//     return 0;
// }
// class Vehicle {
//     int wheels_count;
// protected:
//     float max_speed;
// public:
//     string manufacturer;
//     Vehicle(int, float, string);
//     void vehicle_print();
// };
// Vehicle::Vehicle(int wheels_count, float max_speed,
//     string manufacturer):
// wheels_count(wheels_count),
// max_speed(max_speed),
// manufacturer(manufacturer){
//     cout << "Vehicle constructor called\n";    
// }
// void Vehicle::vehicle_print() {
//     cout << "Wheel Count: " << wheels_count << endl;
//     cout << "Max Speed: " << max_speed << endl;
//     cout << "Manufacturer: " << manufacturer << endl;
// }
// class Automobile : public Vehicle{
//     float engine_cc;
// protected:
//     int gear_count;
// public:
//     Automobile(int wheels_count, float max_speed,
//         string manufacturer, float engine_cc,
//         int gear_count):
//     engine_cc(engine_cc),
//     gear_count(gear_count),
//     Vehicle(wheels_count, max_speed, manufacturer) {
//         cout << "Automobile constructor called\n";
//     }
//     void automobile_print() {
//         // error: ‘int Vehicle::wheels_count’ is private
//         // cout << "Wheel Count: " << wheels_count << endl;
//         cout << "Max Speed: " << max_speed << endl;
//         cout << "Manufacturer: " << manufacturer << endl;
//         cout << "Engine Capacity: " << engine_cc << endl;
//         cout << "Gear Count: " << gear_count << endl;
//     }
// };
// int main() {
//     Vehicle v(2, 100, "Honda");
//     // cout << "Wheel Count: " << v.wheels_count << endl;
//     // cout << "Max Speed: " << v.max_speed << endl;
//     cout << "Manufacturer: " << v.manufacturer << endl;

//     Automobile a(2, 100, "Honda", 125, 4);
//     // cout << "Wheel Count: " << a.wheels_count << endl;
//     // cout << "Max Speed: " << a.max_speed << endl;
//     cout << "Manufacturer: " << a.manufacturer << endl;
//     // cout << "Engine Capacity: " << a.engine_cc << endl;
//     // cout << "Gear Count: " << a.gear_count << endl;
    
//     return 0;
// }
// class Vehicle {
//     int wheels_count;
// protected:
//     float max_speed;
// public:
//     string manufacturer;
//     Vehicle(int, float, string);
//     void print();
//     void print(bool);
// };
// Vehicle::Vehicle(int wheels_count, float max_speed,
//     string manufacturer):
// wheels_count(wheels_count),
// max_speed(max_speed),
// manufacturer(manufacturer){
//     cout << "Vehicle constructor called\n";    
// }
// void Vehicle::print() {
//     cout << "Wheel Count: " << wheels_count << endl;
//     cout << "Max Speed: " << max_speed << endl;
//     cout << "Manufacturer: " << manufacturer << endl;
// }
// void Vehicle::print(bool in_single_line) {
//     if(in_single_line) {
//         cout << wheels_count << " " << max_speed;
//         cout << " " << manufacturer << endl;
//     }
//     else {
//         cout << wheels_count << endl << max_speed;
//         cout << endl << manufacturer << endl;
//     }
// }
// int main() {
//     Vehicle vehicle(2, 100, "Honda");
//     vehicle.print();
//     vehicle.print(true);
//     vehicle.print(false);
//     return 0;
// }
// class B { 
// public:
// int data_;
// B(int d = 0) : data_(d) { 
//     cout << "B::B(int): " << data_ << endl; }
// ~B() { 
//     cout << "B::~B(): " << data_ << endl; }
// };
// class D: public B {
//  int info_;
// public:
// D(int d, int i) : B(d), info_(i) // ctor-1: Explicit construction of Base
// { 
//    cout << "D::D(int, int): " << data_ << ", " << info_ << endl; }

// D(int i) : info_(i) // ctor-2: Default construction of Base
// { 
//     cout << "D::D(int): " << data_ << ", " << info_ << endl; }

// ~D() { cout << "D::~D(): " << data_ << ", " << info_ << endl; }
// };
// int main()
// {
//    B b(5);

//    // ctor-1: Explicit construction of Base
//    D d1(1, 2);
 
//   // ctor-2: Default construction of Base
//   //If base class constructor do not have
//     // default value  Error
//    D d2(3); 
// return 0;
// }
// class B { 
// public:
// int data_;                   

// B(int d = 0) : data_(d) { 
//     cout << "B::B(int): " << data_ << endl; }
// ~B() { 
//     cout << "B::~B(): " << data_ << endl; }
// };
// class D: public B {
//  int info_;
// public:
// D(int d, int i) 
// {
// //B(d); 
// info_= i ;
// cout << "D::D(int, int): " << data_ << ", " << info_ << endl; 
// }
// D(int i) : info_(i) // ctor-2: Default construction of Base
// { cout << "D::D(int): " << data_ << ", " << info_ << endl; }
// ~D() { cout << "D::~D(): " << data_ << ", " << info_ << endl; }
// };
// int main()
// {
//    B b(5);


//  D d1(1, 2);

// /* 
// Now the code will work fine, the only issue is compiler will set data_ variable to 0 (default) rather setting it to 1 (user’s input)
// */

// return 0;
// }
// class Vehicle { 
//     // output 22 100 honda 125 4
// protected:
//     int wheels_count;
//     float max_speed;
//     string manufacturer;

//     Vehicle(int, float, string);
//     void vehicle_print();
// };
// Vehicle::Vehicle(int wheels_count, float max_speed,
// 				string manufacturer):
// wheels_count(wheels_count),
// max_speed(max_speed),
// manufacturer(manufacturer) {
//     cout << "Vehicle constructor called\n";
// }
// void Vehicle::vehicle_print() {
//     cout << "Wheel Count: " << wheels_count << endl;
//     cout << "Max Speed: " << max_speed << endl;
//     cout << "Manufacturer: " << manufacturer << endl;
// }

// class Automobile : public Vehicle{
//     float engine_cc;
//     int gear_count;
// public:    
// Automobile(int wheels_count, float max_speed,
// 		  string manufacturer,
//                 float engine_cc, int gear_count):
//     engine_cc(engine_cc),
//     gear_count(gear_count),
//     Vehicle(wheels_count, max_speed, manufacturer) {
//         cout << "Automobile constructor called\n";
//     }
//     void print() {
//         vehicle_print();
//         cout << "Engine Capacity: " << engine_cc << endl;
//         cout << "Gear Count: " << gear_count << endl;
//     }
// };
// int main() {
//     Automobile automobile(2, 100, "Honda", 125, 4);
//     automobile.print();
//     return 0;
// }

class A {
protected:
    int num1;
public:
    A(int n): num1(n) {
        cout << "A constructor called\n";
    }
    ~A() {
        cout << "A destructor called\n";
    }
};

class B {
protected:
    int num2;
public:
    B(int n): num2(n) {
        cout << "B constructor called\n";
    }
    ~B() {
        cout << "B destructor called\n";
    }
    void print() {
        cout  << num2 ;
    }
};
    
        
        class C: public B, public A {
protected:
    int num3;
public:
    B b; // why there is a not errro .. There is a not any default 
// Constructore so may produce there is a erro bot why no ?
    C(int num1, int num2, int num3, int num4):
    A(num2),
    B(num1),
    num3(num3),
    b(num4) {
        cout << "C constructor called\n";
    }
    ~C() {
        cout << "C destructor called\n";
    }
    void print() {
        cout << num1 << num2 << num3;
    }
};

int main() {
    C c(69, 79, 89, 99);
    c.print();
    c.b.print();
    return 0;
}

