#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include<exception>
#include <cstring>

using namespace std;
//!____________________________________________1 ex________________________________________
// int main(){
//     int *ptr,**ptr1 ,a;
//     a=6;
//     ptr=&a;
//     ptr1=&ptr;
//     cout<<ptr<<endl;
//     cout<<ptr1<<endl;
//     cout<<*ptr<<endl;
//     cout<<*ptr1<<endl;
//     cout<<**ptr1<<endl;
//     ptr+=2;
//     cout<<ptr<<endl;
//     ptr1+=2;
//     cout<<ptr1<<endl;

// }
//!________________________________2ex__________________________________________________________
// int main(){
//     int a=4;
//     int *ptr=&a;
//     cout<<*ptr;
//     cout<<*ptr+*ptr;
// }
//!_______________________3 ex___________________________________________________________________________
// int main(){
//     int a[]={1,2,3,4,5};
//     int *ptr;
//     for(int i=0;i<5;i++){
//         cout<<a[i];
//     }
//     ptr=a;
//     cout<<*ptr;
//     ptr++;
//     cout<<*ptr;
//     ptr--;
//     cout<<*ptr;
//     ptr+=2;
//     cout<<*ptr;
//     ptr++;
//     cout<<*ptr;
// }
// //!____________________________________4 ex_____________________________________________________
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int *ptr;
//     ptr=a;
//     int m;
//     cin>>m;
//     for(int i=0;i<n;i++){
//         if(*ptr==m){
//         cout<<i;
//         break;
//         }
//         else if(i==n)
//         cout<<"NOT FOUND";
//         ptr++;
//     }
    
// }
// //!____________________________________5 ex_____________________________________________________
// int main(){
//     int i=0;
//     char *ptr[7]{"neha","gudu","datu","papa","muma"};
//     char str[25]; 
//     cin>>str;
//     for( i=0;i<5;i++){
//       if(!strcmp(str,ptr[i])){
//         cout<<"FOUND";
//         break;
//       }
      
//     }
//      if(i==5)
//       cout<<"NOT FOUND";
      
// }
// //!____________________________________6 ex_____________________________________________________
// int main(){
//     char str[]="neha patel y";
//     int l=strlen(str);
//     char *sub=new char[l];
//     cin>>sub;
//     int l1=strlen(sub);
//     int k;
//     for(int i=0;i<l;i++){
//      k=i;
//      for(int j=0;j<l1;j++){
//         if(str[k]==sub[j]){
//             if(j==l1-1){
//                 cout<<"FOUND";
//                 exit(0);
//             }
//             k++;
//         }
//         else break;
    
//      }

//     }
//     if(k==l-1)
//     cout<<"NOT FOUND";
      
// }
//!____________________________________7 ex_____________________________________________________
// typedef void (*fun)(int,int);
// void add(int i,int j){
//     cout<<i+j;
// }
// void sub(int i,int j){
//     cout<<i-j;
// }

// int main(){
//     fun ptr;
//     ptr=&add;
//     add(4,5);
//     ptr=&sub;
//     sub(3,2);
// }
// //? othe one 
// #include <iostream>

// void add(int i, int j) {
//     std::cout << i + j;
// }

// void sub(int i, int j) {
//     std::cout << i - j;
// }

// int main() {
//     void (*ptr)(int, int);  // Define a function pointer type

//     ptr = &add;  // Assign address of add function to the function pointer
//     add(4, 5);  // Call add function directly
//     ptr(4, 5);  // Call add function using function pointer

//     ptr = &sub;  // Assign address of sub function to the function pointer
//     sub(3, 2);  // Call sub function directly
//     ptr(3, 2);  // Call sub function using function pointer

//     return 0;
// }
// //!____________________________________8 ex_____________________________________________________
// class i{
//     int p,c;
//     public:
//     i(){}
//     void set(int x,int y){
//         p=x; c=y;
//     }
//     void get(){
//         cout<<p<<c;
//     }
// };
// int main(){
//     i *p=new i[2];
//     i *d=p;
//     int a,b;
//     for(int i=0;i<2;i++){
//         cin>>a>>b;
//         p->set(a,b);
//         p++;
        
//     }
//     for(int i=0;i<2;i++){
       
//         d->get();
//         d++;
//     }
    
// }
//!____________________________________9 ex_____________________________________________________
// class city{

//     int l;
//     char *name;
//     public:
//     city(){
       
//     }
//     void set(){
//       char str[30];
//       cin>>str;
//       int l1=strlen(str);
//       name=new char [l1+1];
//       strcpy(name,str);

//     }
//     void get(){
//         cout<<name;
//     }
// };
// int main(){
    
//     city *ptr[10];
//     int n=1;
//     int op=1;
//     do{
//         ptr[n]=new city;
//         ptr[n]->set();
//         n++;
//         cin>>op;

//     }
//     while(op);
//     for(int i=0;i<n;i++){
       
//        ptr[i]->get();
//     }
// }
//!____________________________________10 ex_____________________________________________________
// class p{

   
//     char name[10];
//     int age;
//     public:
//        p(char *n ,int a){
//        strcpy(name,n);
//        age=a;
//     }
   
//     p operator >(p pa){
//         if(age>pa.age)
//         return *this;
//         else return pa;
//     }
//     void display(){
//         cout<<name<<age;
//     }
// };
// int main(){
//     p p1("neha",18),p2("gudu",22),p3("datu",13);
//     p pp=p1>p2;
//     p ppp=p1>p3;
//     pp.display();
//     ppp.display();
    
// }
//!____________________________________11 ex_____________________________________________________
// #include <iostream>
// using namespace std;

// class Base {
// public:
//     virtual void display() {
//         cout << "Base class" << endl;
//     }
// };

// class Derived : public Base {
// public:
//     void display() override {
//         cout << "Derived class" << endl;
//     }
// };

// int main() {
//     Base* basePtr;  // Pointer to the base class
//     Base baseobj;
//     Derived derivedObj;  // Create an object of the derived class

//     basePtr = &baseobj;  // Point the base pointer to the derived object
// basePtr = &derivedObj;  
//     basePtr->display();  // Calls the derived class display() function

//     return 0;
// }
#include <iostream>
using namespace std;

class Base {
protected:
    int baseVar;

public:
    Base(int value) : baseVar(value) {}

   void display() {
        cout << "Base class variable: " << baseVar << endl;
    }

    void info() {
        cout << "Base class info" << endl;
    }
};

class Derived : public Base {
private:
    int derivedVar;

public:
    Derived(int baseValue, int derivedValue)
        : Base(baseValue), derivedVar(derivedValue) {}

    void display() {
        cout << "Derived class variable: " << derivedVar << endl;
    }

    void info()  {
        cout << "Derived class info" << endl;
    }
};

int main() {
    Base* basePtr;      // Pointer to the base class
    Derived* derivedPtr; // Pointer to the derived class

    Derived derivedObj(10, 20);  // Create an object of the derived class

    basePtr = &derivedObj;       // Point the base pointer to the derived object
    derivedPtr = &derivedObj;    // Point the derived pointer to the derived object

    basePtr->display();      // Calls the base class display() function
    // derivedPtr->display();   // Calls the derived class display() function

    basePtr->info();         // Calls the derived class info() function
    // derivedPtr->info();      // Calls the derived class info() function

    basePtr->Base::display();  // Access base class member using base pointer

    return 0;
}
