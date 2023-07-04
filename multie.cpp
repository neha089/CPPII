#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstdarg>
using namespace std;
// class test{
//     public:
//       void print() const{
//         cout<<"hello";
//       }
// };

// int main(){
//     const test t1;
//     test t2;
//     t2.print();
//     t1.print();
// }
class person{
    string name;
    int age;
    int height;
    string gender;
    int weight;
    public:

      person(string name,int age,int height,string gender,int weight){
        this->name=name;
        this->age=age;
        this->height=height;
        this->gender=gender;
        this->weight=weight;
      }
      person(const person&obj){
        name=obj.name;
        age=obj.age;
        height=obj.height;
        gender=obj.gender;
        weight=obj.weight;


      }
      void di(void){
        cout<<name<<age<<height<<gender<<weight<<endl;
      }
};
int main(){
    person p("neha",18,4,"female",50);
    person p1(p);
    person p3();
    p.di();
    p1.di();

}