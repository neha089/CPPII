#include<iostream>
using namespace std;

class B; // Forward declaration

class A
{
public:
     void foo(B &b); // Method declaration
};

class B
{
private:
    int value;

public:
    B() : value(0) {}
    friend void A::foo(B &b); // Friend declaration
};

void A::foo(B &b)
{
    b.value = 4; // Modify the value of b's private member
    cout << b.value; // Print the value of b's private member
}

int main()
{
    A a;
    B b;

    a.foo(b);

    return 0;
}
