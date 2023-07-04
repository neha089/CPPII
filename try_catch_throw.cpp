#include <iostream>
using namespace std;
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
//         }
// 	cout<<"This statement will be skipped in this demo";
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
//             throw 5;
//         }
//         catch(int i) {
//             cout << "Inner catch II: " << i << endl;
//         }
//     }
//     catch(int n) {
//         cout<<"outer int";
//         throw;
//     }
//     catch(const char *str) {
//         cout << "Outer catch II: " << str << endl;
//     }
//     cout << "This is a try catch demo!";
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
