#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// // in structure we can not hiding data
// we must use struct key word to declare variable
// all data in structure are public also there is not methods
// classes==structure +others
// and in class are by default private we have data hiding
// just only holding data then use strucure itherwise use class
// classes have methodes and properties
// both are public or private
// not use here struct key word with variable
//can create variable along with } 


//sample
// class first{
//     private:    // only function that are declare in class they only can use it
//      int a,b,c;
//     public: 
//     int d,e;
//     void setdata(int a1,int b1,int c1);//declaration // we can also impliment here fucntion 
//     void getdata(){ //implimentation
//     cout<<"the values are "<<a <<b<<c<<d<<e;
//     }
// };
// void first :: setdata(int a1,int b1,int c1){
 
//  a=a1;
//  b=b1;
//  c=c1;
// }
// int main(){
//     first neha;
//     neha.setdata();
//     neha.d=4;
//     //neha.a=2;//give error bcz a is a private data thats why we can not directly access this 
//     cin>>neha.e;
//     //cin>>neha.a; // cannot its private
//     neha.getdata();
// }


//## NESTING OF MEMBER FUNCTION 
//  class binary{
//     string s;
//     public:
//     void read(void);
//     void chk_bin(void);
//     void one(void);
//     void display(void);
//  };
//  void binary:: read(void){
//     cout<<"string";
//     cin>>s;
//     chk_bin(); // its call nesting of function we directly call like that if all fucntion are public or private both 
//     one();
//     display();
//  }
// void binary:: chk_bin(void){
//     for(int i=0;i<s.length();i++){
//         if(s.at(i)!='0' && s.at(i)!='1'){
//             cout<<"not valid";
//             exit(0);
//         }
//     }
// }
// void binary:: one(void){
//      for(int i=0;i<s.length();i++){
//         if(s.at(i)=='0')
//         s.at(i)='1';
//         else
//         s.at(i)='0';

        
//      }
    
// }
// void binary:: display(void) {
//     for(int i=0;i<s.length();i++){
//         cout<<s.at(i);
//     }
// }
//  int main(){
//     binary b;
//     b.read();     // you can only do this if all the function are public if they are
//     // private then we cannot do this for this we have to du nesting of fucntion
//     // b.chk_bin();
//     // b.one();
//     // b.display();
    
//  }
// class book{
//     string bookname;
//     string authorname;
//     int rate;
//     int qty;


//     public:
//     void getdata(void);
//     void displaydata(void);
//     void calculate(void);

// };
// void book:: getdata(void){
//     cout<<"you bookname";
//     getline(cin,bookname);
//     cout<<"your author name";
//     getline(cin,authorname);
//     cout<<"rate of book";
//     cin>>rate;
//     cout<<"how many book you want";
//     cin>>qty;
// }
// void book:: displaydata(void){
//     cout<<"you bookname";
//     cout<<bookname<<endl;
//     cout<<"your author name";
//     cout<<authorname<<endl;
//     cout<<"rate of book";
//     cout<<rate<<endl;
//     cout<<"how many book you want";
//     cout<<qty;
//     calculate();
// }
// void book:: calculate(void){
//     int total_price=qty*rate;
//     cout<<"your total price is";
//     cout<<total_price;


// }



// int main(){
//     book my;
//     my.getdata();
//     my.displaydata();

// }


//## memory allocation .......

// class shop{
//     int itemid[100];
//     int itemprice[100];
//     int count;
//     public:
//     void setprice(void);
//     void initcout(void){
//         count=0;
//     }
//     void getprice(void);

// };
// void shop:: setprice(void){
//     cout<< "id is" << endl;
//     cin>>itemid[count];
//     cout<< "itemprice" << endl;
//     cin>>itemprice[count];
//     count++;
// }
// void shop:: getprice(void){
//     for(int i=0;i<count;i++){
//        cout<< "itemid" <<itemid[i]<<"itemprice"<<itemprice[i];
//     }
// }
// int main(){
//     shop s;
//     s.initcout();
//     s.setprice();
//     s.setprice();
//     s.setprice();
//     s.setprice();
//     s.getprice();

// }
// class num{
//     int a;
//     int b;
//     public:
//     void getdata(void);
//     void putdata(void);

// };
// void num:: getdata(void){
//     cin>>a>>b;


// }
// void num:: putdata(void){
//     cout<<a<<b;
// }

// int main(){
//     num n,m;
//     n.getdata();
//     n.putdata();
//     m.getdata();
//     m.putdata();

// }
