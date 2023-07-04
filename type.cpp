#include<iostream>
#include<string>

using std::cout;
using std::endl;
using std::ostream;

class Number {
    int num;
public:
    Number(int num) {
        cout << "constructor called\n";
        this->num = num;
    }

    operator char() {
        cout << "conversion function called\n";
        return num;
    }

    friend ostream &operator<<(ostream &strm, Number &n);
};
ostream &operator<<(ostream &strm, Number &n) {
    strm << "num is: " << n.num;
    return strm;
}
int main() {
    Number n = 10;
    cout << n << endl;;
    char i;
    i = n;
    cout << i << endl;
    return 0;
}
