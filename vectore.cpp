//! we alredy have have array to short data in sequence with same data type then why we need vectore ?
//?array is a static wwe cannot resize it .. vectore is a flexible we can easily resize them 
//!v.push_back()-->use to add elemets
//!v.pop_back()-->remove last charactore of vectore
//!v.empty()-->check vectore
//!v.insert()-->add element at any place
//!v.end()-->point at end;
//!v.begin()-->point at start;
//!v.size()-->show size of vecotore(present num of elements).
//!v.assign-->assin the value
//!v.at()-->give value at perticular positoin 
//!v.back()-->return reference of last element of vectore

//? u can inislize vecotre like that
//** vectore<int>v  zero length vectore give size by user input
//** vectore<int>v1(n) vectore of n size by default
//** vectore<int>v2(v1) copy of v1 .. same as v1
//** vectore<int>v(2,3) 2 is size and 3 is a value v is vectore of 2 size and elements are  3 3
//?vectore have extra capacity to store elemets  capacity>=size for vectore capacity increase in 2x where x is a number of the present elements










//TODO : example
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// int main() {
//     int n;
//     int x;
//     cin >> n;
//     vector<int> v;
//     for(int i=0; i<n; i++){
//         cin >> x;
//         v.push_back(x);
//     }
//     // for(int i=0; i<=v.size(); i++){
//     //     v.pop_back();
//     // }
//      vector<int> :: iterator inte =v.begin(); //!how to declare iterator ... iteratore point to the first address of the vectore
//     // v.insert(inte+v.size(),25); //! can insert elements using itretore at any place
//      v.insert(inte+1,4,25);//!if you want to add more than one time then you can do this
//     for(int i=0; i<v.size(); i++){
//         cout << v[i];
//     }
//     return 0;
// }
// //TODO:example v.assign --> assign the value
// int main() {
//     int n;
    
//     vector<int> v(7,10);
//     vector<int> v1;
//     vector<int> v2;
//     vector<int>:: iterator inte;
//     inte=v.begin()+1;
//     v1.assign(inte,v.end()-1);
//     int arr[]={1,2,3};
//     v2.assign(arr,arr+3);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i] <<endl;
//     }
//     for(int i=0;i<v1.size();i++){
//         cout<<v1[i]<<endl;
//     }
    
//     for(int i=0;i<v2.size();i++){
//         cout<<v2[i]<<endl;
//     }
//     //!oiutput 10 10 10 10 10 10 10 
//     //! 10 10 10 10 10
//     //! 1 2 3
    
    
// }
//TODO:example v.at
// int main() {
//     int n;
    
//     vector<int> v(4);
    
    
//     for(int i=0;i<v.size();i++){
//         v.at(i)=i;
//     }
//     for(int i=0;i<v.size();i++){
//         cout<<v.at(i)<<endl;
//     }
    
   
//     //!oiutput 0 1 2 3
    
    
    
// }
//TODO:example v.back
// int main() {
//     int n;
    
//     vector<int> v;
//     v.push_back(10);
//     while(v.back()!=0){
//         v.push_back(v.back()-1);

//     }
//     for(int i=0;i<v.size();i++){
//         cout<<v[i] <<endl;
//     }
    
//     //!oiutput 10 9 8 7 6 5 4 3 2 1 0
  
    
    
// }
//TODO:example v.end v.begin
// int main() {
   
    
//     vector<int> v;
    
//     for(int i=0;i<5;i++){
//        v.push_back(i);
//     }
//     for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
//         cout<<*it<<endl;
//     }
    
   
//     //!oiutput 0 1 2 3 4
    
    
    
// }


    //TODO:example v.end v.begin
// int main() {
   
    
//     vector<int> v;
    
//     for(int i=0;i<5;i++){
//        v.push_back(i);
//     }
//     for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
//         cout<<*it<<endl;
//     }
    
   
//     //!oiutput 0 1 2 3 4
    
    
    
// }
   //TODO:example v.size v.capacity v.max_size
int main() {
   
    
    vector<int> v;
    
    for(int i=0;i<100;i++)
       v.push_back(i);
    
    cout<<v.size()<<endl;
     cout<<v.capacity()<<endl;
      cout<<v.max_size()<<endl;
      
   
    //!oiutput 100 128 1073741823
    
    
    
}
//TODO:example v.cend v.cbegin
int main() {
   
    
    vector<int> v;
    
    for(int i=0;i<5;i++){
       v.push_back(i);
    }
    for(auto it = v.cbegin(); it != v.end(); it++){
        cout<<*it<<endl;
    }
    
   
//     //!oiutput 0 1 2 3 4
    
    
    
}


    

