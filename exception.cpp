
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include<exception>

using namespace std;
// int main() {
//         int num1, num2, result;
//         cin >> num1 >> num2;
//         result = num1 / num2;
//         cout << num1 << " / " << num2 << " = " << result<<endl;
    
//     return 0;
// }
// int main() {
//     int num1, num2, result;
//         cin >> num1 >> num2;
//     try {
        
//         if(0 == num2) {
//             cout<<"OK"<<endl;
//         }
//         result = num1 / num2;
//         cout << num1 << " / " << num2 << " = " << result<<endl;
//     }
//     catch(int n) {      // try block must have catch block
//         cout << "Exception caught " << n << endl;
//     }    
    
//     return 0;
// }

// int main() {
//     // try {
//         int num1, num2, result;
//         cin >> num1 >> num2;
//         if(0 == num2) {
//             throw "Division by zero was caught!";
//         }
//         result = num1 / num2;
//         cout << num1 << " / " << num2 << " = " << result<<endl;
//     // }
//     // catch(int n) {
//     //     cout << "Exception caught " << n << endl;
//     // }
//     cout << "This is a try catch demo!";
//     return 0;
// }
// int main() {
//     try {
//         int num1, num2, result;
//         cin >> num1 >> num2;
//         if(0 == num2) {
//             throw "Division by zero was caught!";
//         }
//         result = num1 / num2;
//         cout << num1 << " / " << num2 << " = " << result<<endl;
//     }
//     catch(const char *str) {
//         cout << "Exception caught1 " << str << endl;
//     }
//     catch(const char *str) {
//         cout << "Exception caught2 " << str << endl;
//     }
//     catch(const char *str) {
//         cout << "Exception caught3 " << str << endl;
//     }
//     catch(const char *str) {
//         cout << "Exception caught4 " << str << endl;
//     }
//     // catch(int n) {
//     //     cout << "Exception caught " << n << endl;
//     // }
//     catch(const char *str) {
//         cout << "Exception caught5 " << str << endl;
//     }
//     cout << "This is a try catch demo!";
//     return 0;
// }
// int main() {
//     try {
//         int num1, num2, result,num11,num21;
//         cin >> num1 >> num2;
//         if(0 == num2) {
//             throw float(num2);
//         }
//         result = num1 / num2;
//         cout << num1 << " / " << num2 << " = " << result<<endl;
//     }
//      catch(...) {    // Notice use of ellipsis
//         cout << "catch all called1!!\n";
//     }
//     catch(float n){
//          cout << "catch all called11111!!\n";
//     }
    
    
//     try {
//         int num11, num21, result;
//         cin >> num11 >> num21;
//         if(0 == num21) {
//             throw float(num21);
//         }
//         result = num11 / num21;
//         cout << num11 << " / " << num21 << " = " << result<<endl;
//     }
//     catch(int n) {
//         cout << "Exception caught " << n << endl;
//     }
   
//     catch(const char *str) {
//         cout << "Exception caught " << str << endl;
//     }
   
//     catch(...) {    // Notice use of ellipsis
//         cout << "catch all called!!\n";
//     }
//     cout << "This is a try catch demo!";
//     return 0;
// }
// int main() {
//     try {
//         int num1, num2, result;
//         cin >> num1 >> num2;
//         try{
//             if(0 == num2) {
//                 throw "Division by zero was caught!";
//             }
//             result = num1 / num2;
//             cout << num1 << " / " << num2 << " = " << result<<endl;
//         }
//         catch(int n) {    // Notice use of ellipsis
//         cout << "catch all called!!\n";
//     }
//         // catch(const char *str) {
//         //     cout << "Inner catch I : " << str << endl;
//         // }
//         cout<<"LLLLLL"<<endl;
//     }
//     catch(int n) {
//         cout << "Exception caught " << n << endl;
//     }
//     catch(const char *str) {
//         cout << "Exception caught " << str << endl;
//     }
//     cout << "This is a try catch demo!";
//     return 0;
// }
// int main() {
//     try {
//         int num1, num2, result;
//         cin >> num1 >> num2;
//         try{
//             if(0 == num2) {
//                 throw "Division by zero was caught!";
//             }
//             result = num1 / num2;
//             cout << num1 << " / " << num2 << " = " << result<<endl;
//         }
//         catch(const char *str) {
//             cout << "Inner catch I : " << str << endl;
//             throw;
//         }
//         catch(const char *str) {
//             cout << "Inner catch II: " << str << endl;
//         }
//     }
//     catch(int n) {
//         cout << "Outer catch I : " << n << endl;
//     }
//     // catch(const char *str) {
//     //     cout << "Outer catch II: " << str << endl;
//     // }
//     cout << "This is a try catch demo!";
//     return 0;
// }
// class DivideByZeroException: public std::exception {
// public:
    //  const char* what() const throw()
    // {
    //     return "DivideByZeroException raised!";
    // }
// };
// int main() {
//     int num1, num2, result;
//     cin >> num1 >> num2;
//     try {
//         if(0 == num2) {
//             DivideByZeroException dz;
// 	    throw dz;
//             // We should avoid following code as it will throw dynamic object and
//            // that dynamic object needs to be deleted by catch block
// 	   //throw *(new DivideByZeroException);
//         }
//         result = num1 / num2;
//     }
//     catch(DivideByZeroException &dbze) {
//         cout << "catch DBZE: " << dbze.what();
//     }
//     catch(std::exception &e) {
//         cout << "catch E: " << e.what();
//     }
//     cout << "\nThis is a try catch demo!";
// }
// class DivideByZeroException: private std::exception {
// public:
//     //  const char* what() const throw()
//     // {
//     //     return "DivideByZeroException raised!";
//     // }
// };
// int main() {
//     int num1, num2, result;
//     cin >> num1 >> num2;
//     try {
//         if(0 == num2) {
//             DivideByZeroException dz;
// 	    throw dz;
//         }
//         result = num1 / num2;
//     }
//     catch(std::exception &e) {
//         cout << "catch E: " << e.what();
//     }
//     // catch(DivideByZeroException &dbze) {
//     //     cout << "catch DBZE: " << dbze.what();
//     // }
//     cout << "\nThis is a try catch demo!";
// }
// class DivideByZeroException: public std::exception { //if you write here private then output also the same // but make sure you write this what method in derived class
// public:
//     //  const char* what() const throw()//if you remove virtual then also output will be same
//     // {
//     //     return "DivideByZeroException raised!";
//     // }
// };
// int main() {
//     int num1, num2, result;
//     cin >> num1 >> num2;   
//     try {
//         if(0 == num2) {
//             DivideByZeroException dz;
// 	    throw dz;
//             // We should avoid following code as it will throw dynamic object and
//            // that dynamic object needs to be deleted by catch block
// 	   //throw *(new DivideByZeroException);
//         }
//         result = num1 / num2;
//     }
    
//     catch(std::exception &e) {
//         cout << "catch E: " << e.what();
//     }
//     catch(DivideByZeroException &dbze) {
//         cout << "catch DBZE: " << dbze.what();
//     }
//     cout << "\nThis is a try catch demo!";
// }
// class Node {
//     int i;
//     Node *next;
// public:
//     Node() { cout << "constructor called\n"; }
//     ~Node() { cout << "destructor called\n"; }
// };
// Node *create_node_array(int nodes) {
//     Node *node = new Node[nodes];
//     return node;
// }
// int main() {
//     long number_of_nodes;
//     Node *node_arr_ptr;
//     while(1) {
//         cin >> number_of_nodes;
//         try {
//             node_arr_ptr = create_node_array(number_of_nodes);
//             break;
//         }
//         catch(std::exception &ba) { // #include<exception>
//             cout << "Exception while creating node: " << ba.what() << endl;
//             // number_of_nodes = 0;
//         }
//     }
//     delete [] node_arr_ptr;
//     cout << "This is a try catch demo! " << node_arr_ptr;
//     return 0;
// }
// class Node {
//     int i;
//     Node *next;
// public:
//     Node() { cout << "constructor called\n"; }
//     ~Node() { cout << "destructor called\n"; }
// };
// Node *create_node_array(int nodes) {
//     Node *node = NULL;
//     try {
//         node = new Node[nodes];
//     }
//     catch(std::exception &ba) { // #include<exception>
//        cout << "Exception while creating node1: " << ba.what() << endl;
//     }
//     return node;
// }
// int main() {
//     long number_of_nodes;
//     Node *node_arr_ptr;
//     while(1) {
//         cin >> number_of_nodes;
//         try {
//             node_arr_ptr = create_node_array(number_of_nodes);
//             break;
//         }
//         catch(std::exception &ba) { // #include<exception>
//             cout << "Exception while creating node11: " << ba.what() << endl;
//             number_of_nodes = 0;
//         }
//     }
//     delete [] node_arr_ptr; // It is safe to delete NULL ptr (it is like no-op)
//     cout << "This is a try catch demo! " << node_arr_ptr;
//     return 0;
// }
// class Node {
//     int i;
//     Node *next;
// public:
//     Node() { cout << "constructor called\n"; }
//     ~Node() { cout << "destructor called\n"; }
// };
// void *create_node_array(int nodes) throw() {
//     Node *node = NULL;
//     try {
//        node = new Node[nodes];
//     }
//     // catch(std::exception &ba) { // #include<exception>
//     //    cout << "Exception while creating nod1e: " << ba.what() << endl;
//     // }
//     // return node;
// }
// int main() {
//     long number_of_nodes;
//     Node *node_arr_ptr;
//     while(1) {
//         cin >> number_of_nodes;
//         try {
//             node_arr_ptr = create_node_array(number_of_nodes);
//             break;
//         }
//         catch(std::exception &ba) { // #include<exception>
//             cout << "Exception while creating nod1111e: " << ba.what() << endl;
//             number_of_nodes = 0;
//         }
//     }
//     delete [] node_arr_ptr;
//     cout << "This is a try catch demo! " << node_arr_ptr;
//     return 0;
// }
class Node {
    int i;
    Node *next;
public:
    Node() { cout << "constructor called\n"; }
    ~Node() { cout << "destructor called\n"; }
};
Node *create_node_array(int nodes) throw() {
    Node *node = new Node[nodes];
    return node;
}
int main() {
    long number_of_nodes;
    Node *node_arr_ptr;
    while(1) {
        cin >> number_of_nodes;
        try {
            node_arr_ptr = create_node_array(number_of_nodes);
            break;
        }
        catch(std::exception &ba) { // #include<exception>
            cout << "Exception while creating node: " << ba.what() << endl;
            number_of_nodes = 0;
        }
    }
    delete [] node_arr_ptr;
    cout << "This is a try catch demo! " << node_arr_ptr;
    return 0;
}