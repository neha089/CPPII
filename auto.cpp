#include <iostream>
#include <vector>

using namespace std;

void fun(double x) {
    cout << "fun1" << endl;
}

void fun(long x) {
    cout << "fun2" << endl;
}

int main() {

    fun(5.1);
    return 0;
}
