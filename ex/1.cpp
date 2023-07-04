#include <iostream>
#include <vector>

using namespace std;
class rect{
    double x,y,l,w;
    public:
    rect(){}
    rect(double x1,double y1,double l1,double w1){
        x=x1;
        y=y1;
        l=l1;
        w=w1;
    }
   rect  operator <<(double a){
        rect r1(*this);
        r1.x-=a;
        r1.w+=a;
        return r1;


    }
    rect operator +(double y){
        rect t(*this);
        t.l+=y;
       return t;

    }
    void display(){
        cout<<x<<y<<l<<w;
    }
};
int main(){
    double x1,y1,l1,w1;
    cin>>x1>>y1>>l1>>w1;
    rect r(x1,y1,l1,w1);
    r=r<<0.1;
    r=r+0.3;
    r.display();
    

}