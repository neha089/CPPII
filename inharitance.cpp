//! ________________________________________inheritance___________________________________________________
//?reuseability
//?the deriving a new class from already present old class is call inheritance


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// class B { 
// public:
// int data_;
// B(int d) : data_(d) { 
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
 
  // ctor-2: Default construction of Base
  //If base class constructor do not have
    //default value  Error
   //D d2(3); 
// return 0;
// }
// class B {  
//     // output  5 0 0 2 0 2 0 5
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
class Vehicle {
protected:
    int wheels_count;
    float max_speed;
    string manufacturer;

    Vehicle(int, float, string);
    void vehicle_print();
};
Vehicle::Vehicle(int wheels_count, float max_speed,
				string manufacturer):
wheels_count(wheels_count),
max_speed(max_speed),
manufacturer(manufacturer) {
    cout << "Vehicle constructor called\n";
}
void Vehicle::vehicle_print() {
    cout << "Wheel Count: " << wheels_count << endl;
    cout << "Max Speed: " << max_speed << endl;
    cout << "Manufacturer: " << manufacturer << endl;
}

class Automobile : public Vehicle{
    float engine_cc;
    int gear_count;
public:    
Automobile(int wheels_count, float max_speed,
		  string manufacturer,
                float engine_cc, int gear_count):
    engine_cc(engine_cc),
    gear_count(gear_count),
    Vehicle(wheels_count, max_speed, manufacturer) {
        cout << "Automobile constructor called\n";
    }
    void print() {
        vehicle_print();
        cout << "Engine Capacity: " << engine_cc << endl;
        cout << "Gear Count: " << gear_count << endl;
    }
};
int main() {
    Automobile automobile(2, 100, "Honda", 125, 4);
    automobile.print();
    return 0;
}


