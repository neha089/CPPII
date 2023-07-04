#include <iostream>
#include <vector>

using namespace std;
class staff{
    int ex;
   
     int sal;

    public:
    staff(){}
staff(int t, int num){
      ex=t;
      sal=num;
    }
   
     virtual void display(){
        cout<<ex<<sal;
    }
};
class tech:public staff{
    int sub;

    public:
    tech(){}
tech(int s){
     sub=s;
    }
   
    void display(){
        cout<<sub;

    }
};
class notech:public staff{
float speed;

    public:
    notech(){}
notech(float v){
     speed=v;
    }
   
    void display(){
        cout<<speed;
    }
};
int main(){
   staff s()
}