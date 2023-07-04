#include <iostream>
#include <vector>

using namespace std;
class bank{
    int tm;
    string acname;
    long int acnum;

    public:
    bank(){}
    bank(int t,string name,long int num){
       tm=t;
       acname=name;
       acnum=num;
    }
   void update(long int num, int t){
    tm+=t;
    acnum=num;

   }
   void update(string name, int t){
    tm+=t;
    acname=name;

   }
    void display(){
        cout<<tm<<acnum<<acname;
    }
};
int main(){
    bank r(5000,"neha",123456);
    r.update("prit",300);
    r.update(98765,500);
    r.display();
    

}