#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class flower{
    int total;
    string name;
    static int num;//!you can not inislize here // also known as class variable
    int num1=0;
    public:
    void set(void){
        cin>>total;
        cin>>name;
        num++;
        num1++;
    }
    void display(void){ //! normal member function acces static or nonstatic data member both
        cout<<total<<endl;
        cout<<name<<endl;
        cout<<num;
        cout<<num1; // ?for perticular object if you done num1++ then the value for all obj is 1 ..
    }
    static void count (void){
        cout<<num;
        //cout<<num1;//!erro bcz static member function only acces static data member with their own class
    }
};
int flower :: num; //! static data member share by all objects // here you can inislize with other num//by defalu is 0

int  main(){
    int num;
    num=2;
    flower f,f1,f2;
    f.set();
    f.display();
    flower::count();//! how to call static member function 
    f1.set();
    f1.display();
    flower::count();
    f2.set();
    f2.display();
    flower::count();
}