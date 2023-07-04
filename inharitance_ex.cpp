#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
// //! 1)


// class account {
// protected:
//     long long int ac_num;
//     string ac_name;
//     string customer_name;

// public:
//     void get() {
//         cout << "Enter your account number: ";
//         cin >> ac_num;
//         cout << "Enter your account name: ";
//         cin >> ac_name;
//         cout << "Enter your name: ";
//         cin >> customer_name;
//         display();
//     }

//     void display() {
//         cout << "Account number: " << ac_num << endl;
//         cout << "Account name: " << ac_name << endl;
//         cout << "Customer name: " << customer_name << endl;
//     }
// };

// class cur_ac : public account {
// private:
//     int balance;

// public:
//     cur_ac() {
//         balance = 0;
//     }

//     void get() {
//         account::get();
//         cout << "Enter initial balance: ";
//         cin >> balance;
//         display();
//     }

//     void check_min_balance() {
//         if (balance < 1000) {
//             balance -= 300;
//         }
//         cout << "Updated balance: " << balance << endl;
//         display();
//     }

//     void withdraw(int amount) {
//         balance -= amount;
//         cout << "Updated balance: " << balance << endl;
//         display();
//     }
// };

// class save_ac : public account {
// private:
//     int balance;
//     int year;

// public:
//     save_ac() {
//         balance = 0;
//         year = 0;
//     }

//     void get() {
//         account::get();
//         cout << "Enter initial balance: ";
//         cin >> balance;
//         cout << "Enter number of years: ";
//         cin >> year;
//         display();
//     }

//     void cout_interest() {
//         double interest = balance * pow(1 + 0.02, year);
//         balance += interest;
//         cout << "Updated balance: " << balance << endl;
//         display();
//     }

//     void withdraw(int amount) {
//         balance -= amount;
//         cout << "Updated balance: " << balance << endl;
//         display();
//     }
// };

// int main() {
//     cur_ac a;
//     a.get();
//     int amount;
//     cout << "Enter amount to withdraw: ";
//     cin >> amount;
//     a.withdraw(amount);

//     save_ac b;
//     b.get();
//     b.cout_interest();
//     b.withdraw(amount);

//     return 0;
// }
//!2)

  

// class account {
// protected:
//     long long int ac_num;
//     string ac_name;
//     string customer_name;

// public:
//     account(long long int num, string name, string customer) {
//         ac_num = num;
//         ac_name = name;
//         customer_name = customer;
//     }

//     void display() {
//         cout << "Account number: " << ac_num << endl;
//         cout << "Account name: " << ac_name << endl;
//         cout << "Customer name: " << customer_name << endl;
//     }
// };

// class cur_ac : public account {
// private:
//     int balance;

// public:
//     cur_ac(long long int num, string name, string customer, int bal)
//         : account(num, name, customer) {
//         balance = bal;
//     }

//     void check_min_balance() {
//         if (balance < 1000) {
//             balance -= 300;
//         }
//         cout << "Updated balance: " << balance << endl;
//         display();
//     }

//     void withdraw(int amount) {
//         balance -= amount;
//         cout << "Updated balance: " << balance << endl;
//         display();
//     }
// };

// class save_ac : public account {
// private:
//     int balance;
//     int year;

// public:
//     save_ac(long long int num, string name, string customer, int bal, int y)
//         : account(num, name, customer) {
//         balance = bal;
//         year = y;
//     }

//     void cout_interest() {
//         double interest = balance * pow(1 + 0.02, year);
//         balance += interest;
//         cout << "Updated balance: " << balance << endl;
//         display();
//     }

//     void withdraw(int amount) {
//         balance -= amount;
//         cout << "Updated balance: " << balance << endl;
//         display();
//     }
// };

// int main() {
//     long long int ac_num;
//     string ac_name, customer_name;
//     int balance, year, amount;

//     // Current account
//     cout << "Enter current account details:" << endl;
//     cout << "Account number: ";
//     cin >> ac_num;
//     cout << "Account name: ";
//     cin >> ac_name;
//     cout << "Customer name: ";
//     cin >> customer_name;
//     cout << "Initial balance: ";
//     cin >> balance;
//     cur_ac a(ac_num, ac_name, customer_name, balance);

//     cout << "Enter amount to withdraw from current account: ";
//     cin >> amount;
//     a.withdraw(amount);

//     // Savings account
//     cout << "Enter savings account details:" << endl;
//     cout << "Account number: ";
//     cin >> ac_num;
//     cout << "Account name: ";
//     cin >> ac_name;
//     cout << "Customer name: ";
//     cin >> customer_name;
//     cout << "Initial balance: ";
//     cin >> balance;
//     cout << "Number of years: ";
//     cin >> year;
//     save_ac b(ac_num, ac_name, customer_name, balance, year);

//     cout << "Enter amount to withdraw from savings account: ";
//     cin >> amount;
//     b.withdraw(amount);

//     return 0;
// }

//!9
#include <iostream>
#include <string>

using namespace std;

// define the parent Vehicle class
class Vehicle {
public:
    string v_type;
    int price;

    // constructor
    Vehicle(string type, int p) {
        v_type = type;
        price = p;
    }
};

// define the TwoWheel class that inherits from Vehicle
class TwoWheel : public Vehicle {
public:
    string tw_type;

    // constructor
    TwoWheel(string type, int p, string tw) : Vehicle(type, p) {
        tw_type = tw;
    }
};

// define the ThreeWheel class that inherits from Vehicle
class ThreeWheel : public Vehicle {
public:
    string th_type;

    // constructor
    ThreeWheel(string type, int p, string th) : Vehicle(type, p) {
        th_type = th;
    }
};

// define the FourWheel class that inherits from Vehicle
class FourWheel : public Vehicle {
public:
    // constructor
    FourWheel(string type, int p) : Vehicle(type, p) {}
};

int main() {
    // take user input for the vehicle type and price
    string v_type;
    int price;

    cout << "Enter vehicle type (two/three/four wheelers): ";
    cin >> v_type;
    cout << "Enter vehicle price: ";
    cin >> price;

    // create object based on user input
    if (v_type == "two") {
        // take user input for the two wheeler type
        string tw_type;
        cout << "Enter two wheeler type (manual/electric/automatic): ";
        cin >> tw_type;

        // create the TwoWheel object
        TwoWheel tw_obj(v_type, price, tw_type);

        // display the output
        cout << "Vehicle Type: " << tw_obj.v_type << ", Price: " << tw_obj.price << ", Two Wheeler Type: " << tw_obj.tw_type << endl;

    } else if (v_type == "three") {
        // take user input for the three wheeler type
        string th_type;
        cout << "Enter three wheeler type (manual/electric/automatic): ";
        cin >> th_type;

        // create the ThreeWheel object
        ThreeWheel th_obj(v_type, price, th_type);

        // display the output
        cout << "Vehicle Type: " << th_obj.v_type << ", Price: " << th_obj.price << ", Three Wheeler Type: " << th_obj.th_type << endl;

    } else if (v_type == "four") {
        // create the FourWheel object
        FourWheel fw_obj(v_type, price);

        // display the output
        cout << "Vehicle Type: " << fw_obj.v_type << ", Price: " << fw_obj.price << endl;

    } else {
        cout << "Invalid vehicle type" << endl;
    }

    return 0;
}
