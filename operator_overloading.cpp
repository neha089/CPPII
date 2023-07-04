//!1)___________________________________________________________

#include <iostream>
using namespace std;
#include <cmath>
#include <vector>
#include<string>
#include <cstring>
// class F {
//     float a ;
//     public:
//     F(float x){
//         a=x;
//     }
//    F operator+(F &f){
//     return F(a+f.a);
//    }
//    F operator-(F &f){
//     return F(a-f.a);
//    }
//    F operator*(F &f){
//     return F(a*f.a);
//    }
//    F operator/(F &f){
//     return F(a/f.a);
//    }
   


  
//   friend ostream& operator<<(ostream& out, const F& f) ;

// };
//  ostream& operator<<(ostream& out, const F& f) {
//     out << f.a << endl;
//     return out;
// }
// int main(){
//     F f1(2.5),f2(2.5);
//     cout<<(f1+f2)<<endl;
//     cout<<(f1-f2)<<endl;
//     cout<<(f1*f2)<<endl;
//     cout<<(f1/f2)<<endl;
// }
//!2)___________________________________________________________________
// class polar{
//     float r,a;
//     public:
//     polar(float r1,float a1){
//         r=r1;
//         a=a1;
//     }
//     polar operator+(polar p){

//         float x=r*cos(a)+(p.r)*(cos(p.a));
//         float y=r*sin(a)+(p.r)*(sin(p.a));
//         r=sqrt(x*x+y*y);
//         a=atan(y/x);
//         return polar(r,a);
//     }
//   friend ostream& operator<<(ostream& out, const polar & f) ;

// };
//  ostream& operator<<(ostream& out, const polar& f) {
//     out <<f.r << f.a << endl;
//     return out;
// }
// int main(){
//     polar p1(2,90), p2(1,180);
//     cout<<p1+p2;
// }
//!3)___________________________________________________________________
// class mat{
//     int x,y;
//     vector<vector<int>>v;
   
//     public:
//     mat(int r,int c){
//         x=r;
//         y=c;
//         v.resize(r, vector<int>(c));

       
//     }

//     void getdata(void){
     
//         for(int i=0;i<x;i++){
//             for(int j=0;j<y;j++){
//                 cin>>v[i][j];
//             }
//         }
       
//     }
//      mat operator+(mat m){
//         mat temp(x,y);
//          for(int i=0;i<x;i++){
//             for(int j=0;j<y;j++){
//                 temp.v[i][j]=v[i][j]+m.v[i][j];
            
//             }
//         }
//         return temp;
//      }
//      mat operator-(mat m){
//         mat temp(x,y);
//          for(int i=0;i<x;i++){
//             for(int j=0;j<y;j++){
//                 temp.v[i][j]=v[i][j]-m.v[i][j];
            
//             }
//         }
//         return temp;
//      }
//      mat operator*(mat m){
//         mat temp(x,y);
//          for(int i=0;i<x;i++){
//             for(int j=0;j<m.y;j++){
//                 for(int k=0;k<m.y;k++){
//                 temp.v[i][j]=v[i][k]+m.v[k][j];
//                 }
//             }
//         }
//         return temp;
//      }
// void print(){
//      for(int i=0;i<x;i++){
//             for(int j=0;j<y;j++){
//                 cout<<v[i][j];
//             }
//             cout<<endl;
//         }

// }

// };
// int main(){
  

//     int r,c;
//     cin>>r>>c;
//    mat m(r,c);
//    int r1,c1;
//    cin>>r1>>c1;
//    mat n(r1,c1);
//    m.getdata();
//    n.getdata();
//    mat sum=m+n;
//    mat diff=m-n;
//    mat mul=m*n;
//     sum.print();
//     diff.print();
//     mul.print();
// }
//!4_______________________________________________________________________________________________
// #include <iostream>
// #include <cstring>

// class String {
//     char* str;

// public:
//     String(const char* s) {
//         str = new char[strlen(s) + 1];
//         strcpy(str, s);
//     }

//     ~String() {
//         delete[] str;
//     }

//     bool operator==(const String& other) const {
//         return strcmp(str, other.str) == 0;
//     }
// };

// int main() {
//     String s1("Hello");
//     String s2("Hello");
//     String s3("World");

//     if (s1 == s2) {
//         std::cout << "s1 and s2 are equal" << std::endl;
//     } else {
//         std::cout << "s1 and s2 are not equal" << std::endl;
//     }

//     if (s1 == s3) {
//         std::cout << "s1 and s3 are equal" << std::endl;
//     } else {
//         std::cout << "s1 and s3 are not equal" << std::endl;
//     }

//     return 0;
// }
//!5_______________________________________________________________________________________________________


// class rect;

// class polar {
//     float a, r;

// public:
//     polar(float r1, float a1) {
//         a = a1;
//         r = r1;
//     }

//     void setr(float d) {
//         r = d;
//     }

//     void seta(float c) {
//         a = c;
//     }

//     void print() {
//         cout << a << r;
//     }

//     operator rect() const;
// };

// class rect {
//     float x, y;

// public:
//     rect(float x1, float y1) {
//         x = x1;
//         y = y1;
//     }

//     void getx(float m) {
//         x = m;
//     }

//     void gety(float n) {
//         y = n;
//     }

//     void print() {
//         cout << x << y;
//     }

//     operator polar() const;
// };

// polar::operator rect() const {
//     rect temp(r * cos(a), r * sin(a));
//     return temp;
// }

// rect::operator polar() const {
//     polar temp(sqrt(x * x + y * y), atan(y / x));
//     return temp;
// }

// int main() {
//     polar p(4, 90);
//     rect r(3, 3);
//     polar p1;
//     p1 = r;
//     rect r1;
//     r1 = p;
//     p1.print();
//     r1.print();
//     return 0;
// }
//!6_______________________________________________________________________________________________________
// #include <iostream>
// using namespace std;

// class complex {
//     float img, r;

// public:
//     complex(float img1, float r1) {
//         img = img1;
//         r = r1;
//     }

//     complex operator+(const complex& c) const {
//         complex temp(img + c.img, r + c.r);
//         return temp;
//     }

//     complex operator-(const complex& c) const {
//         complex temp(img - c.img, r - c.r);
//         return temp;
//     }

//     complex operator*(const complex& c) const {
//         complex temp(img * c.r + r * c.img, img * c.img + r * c.r);
//         return temp;
//     }

//     complex operator++() {
//         ++img;
//         ++r;
//         return *this;
//     }

//     complex operator++(int) {
//         complex temp(img, r);
//         ++img;
//         ++r;
//         return temp;
//     }

//     friend ostream& operator<<(ostream& out, const complex& c);
// };

// ostream& operator<<(ostream& out, const complex& c) {
//     out << c.img << " + " << c.r << "i" << endl;
//     return out;
// }

// int main() {
//     complex c(2.5, 2.5);
//     complex c1(2.5, 2.5);

//     cout << c + c1 << endl;
//     cout << c - c1 << endl;
//     cout << c * c1 << endl;
//     cout << c++ << endl;
//     cout << ++c1 << endl;

//     return 0;
// }


//!7_____________*********************************************IMP***************************************___________________________________________________________________________________________
// #include <iostream>

// class Fraction {
//     int numerator;
//     int denominator;

// public:
//     Fraction(int num = 0, int denom = 1) : numerator(num), denominator(denom) {}

//     void display() const {
//         std::cout << numerator << "/" << denominator;
//     }

//     // Overloading relational operator (==)
//     bool operator==(const Fraction& other) const {
//         return (numerator * other.denominator == denominator * other.numerator);
//     }

//     // Overloading relational operator (!=)
//     bool operator!=(const Fraction& other) const {
//         return !(*this == other);
//     }

//     // Overloading relational operator (<)
//     bool operator<(const Fraction& other) const {
//         return (numerator * other.denominator < denominator * other.numerator);
//     }

//     // Overloading relational operator (>)
//     bool operator>(const Fraction& other) const {
//         return (numerator * other.denominator > denominator * other.numerator);
//     }

//     // Overloading relational operator (<=)
//     bool operator<=(const Fraction& other) const {
//         return (*this < other || *this == other);
//     }

//     // Overloading relational operator (>=)
//     bool operator>=(const Fraction& other) const {
//         return (*this > other || *this == other);
//     }
// };

// int main() {
//     Fraction f1(2, 3);
//     Fraction f2(3, 4);

//     // Comparing fractions using relational operators
//     if (f1 == f2) {
//         f1.display();
//         std::cout << " is equal to ";
//         f2.display();
//         std::cout << std::endl;
//     } else if (f1 < f2) {
//         f1.display();
//         std::cout << " is less than ";
//         f2.display();
//         std::cout << std::endl;
//     } else if (f1 > f2) {
//         f1.display();
//         std::cout << " is greater than ";
//         f2.display();
//         std::cout << std::endl;
//     }

//     return 0;
// }
// //! 1) ex_______________________________________________________________________________
// class un{
//     int x;
//     public:
//     un(int a){
//         x=a;
//     }
//     // un operator-(){ 
//     //    return un(-x);
//     // }
//     friend ostream& operator<<(ostream& out,un u);
//     friend un  operator-(un &u);
    
   
// };
// un operator- (un &u){
//      return un(-(u.x));
// }
// ostream& operator<<(ostream& out,un u){
//     out<<u.x;
//     return out;
// }

// int main(){
//     un u(5);
//     cout<<(-u);
// }
//! 2) ex_______________________________________________________________________________
// class com{
//     float x,y;
//     public:
//     com(float  a,float b){
//         x=a;
//         y=b;
//     }
//     // com operator+(com c){ 
//     //    return com(x+c.x , y+c.y);
//     // }
//     friend ostream& operator<<(ostream& out,com u);
//     friend com  operator+(com c,com c1);
    
   
// };
// com operator+ (com c,com c1){
//      return com(c.x+c1.x , c.y+c1.y);
// }
// ostream& operator<<(ostream& out,com u){
//     out<<u.x<<u.y;
//     return out;
// }

// int main(){
//      com c1(5.5,5.5);
//      com c2(5.5,5.5);
//     cout<<(c1+c2);
//     cout<<c1;
// }
//! 3) ex_______________________________________________________________________________
// class vec{
//     int n;
//     vector<int>vv;
//     public:
//     vec(int m){
//        n=m;
//        vv=vector<int>(n);
//     }
//     void getdata(){
//         for(int i=0;i<n;i++){
//             cin>>vv[i];
//         }
//     }
//     vec operator+ (int n){
//     vec t(n);
//     for(int i=0;i<n;i++){
//         t.vv[i]=vv[i]+n;

     
// }
// return t;
//     }
   
//     friend ostream& operator<<(ostream& out,vec u);
//     friend vec  operator+(int n,vec c1);
//     friend vec  operator*(int n,vec c1);
    
   
// };
// vec operator+ (int n,vec c){
//     vec t(c.n);
//     for(int i=0;i<c.n;i++){
//         t.vv[i]=c.vv[i]+n;

     
// }
// return t;
// }
// vec operator* (int n,vec c){
//     vec t(c.n);
//     for(int i=0;i<c.n;i++){
//         t.vv[i]=c.vv[i]*n;

     
// }
// return t;
// }
// ostream& operator<<(ostream& out,vec u){
//    for(int i=0;i<u.vv.size();i++){
//     out<<u.vv[i];
//    }
//     return out;
// }

// int main(){
//      vec v(4);
//      vec v2(4);
//      vec v3(4);
//      v.getdata();
//      v2.getdata();
//      v3.getdata();
//     cout<<2*v;
//     cout<<2+v2;
//     cout<<v3+2;
// }
//!4 ex________________________________________________________________________________________________
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

// class MyString {
//     int l;
//     char* p;

// public:
//     MyString(int a, string s) {
//         l = a;
//         p = new char[l + 1];
//         strncpy(p, s.c_str(), l);
//         p[l] = '\0';
//     }

//     MyString& operator+(const string& s2);

//     bool operator>=(const string& s2);

//     friend ostream& operator<<(ostream& out, const MyString& u);
// };

// MyString& MyString::operator+(const string& s2) {
//     int new_length = l + s2.length();
//     char* new_p = new char[new_length + 1];
//     strncpy(new_p, p, l);
//     strncpy(new_p + l, s2.c_str(), s2.length());
//     new_p[new_length] = '\0';

//     delete[] p;  // Free the memory allocated for the original string
//     p = new_p;
//     l = new_length;

//     return *this;
// }

// bool MyString::operator>=(const string& s2) {
//     return l >= s2.length();
// }

// ostream& operator<<(ostream& out, const MyString& u) {
//     for (int i = 0; i < u.l; i++) {
//         out << u.p[i];
//     }
//     return out;
// }

// int main() {
//     MyString s2(4, "neha");
//     MyString s1(5, "patel");
//     MyString result = s2  + s1;
//     cout << result << endl;
//     if (s2 >= "patel") {
//         cout << "s more";
//     } else {
//         cout << "s less";
//     }
//     return 0;
// }
//!5 ex______________________________________________________________________________________________
// class arr{
//     int a[5];
//     public :
//     arr(int *x){
//         for(int i=0;i<5;i++){
//             a[i]=x[i];
//         }
//     }
//      int  operator [](int i){
//         return a[i];
//      }
// };
// int main(){
//     int y[5]={1,1,2,3,4};
//     arr A(y);
//     for(int i=0;i<5;i++){
//         cout<<A[i];
//     }

// }
//!6___________________________________________________________________________________________________________
// class A{
// public:
// int num,num1;
// A(int n,int m){
//     num=n;
//     num1=m;
// }
// A* operator ->(void){
//     return this;
// }
// };
// int main(){
//     A a(2,3);
//     A *ptr=&a;
//     cout<<a.num;
//     cout<<ptr->num;
//     cout<<a->num1;
// }
//!7____________________________________________________________________________________________________________
    #include <iostream>
using namespace std;

class int1; // Forward declaration

class int2 {
    int c1;
    float v1;

public:
    int2(int a, float b) {
        c1 = a;
        v1 = b;
    }

    operator int2(int1& i);

    void display() {
        cout << "c1: " << c1 << ", v1: " << v1 << endl;
    }
};

class int1 {
    float p;
    int i, c;

public:
    int1(int x, int y, float z) {
        p = z;
        i = x;
        c = y;
    }

    int getc() {
        return c;
    }

    float getp() {
        return p;
    }

    operator float() {
        return p * i;
    }
};

int2::operator int2(int1& i) {
    c1 = i.getc();
    v1 = i.getp();
}

int main() {
    int1 i1(1, 123, 100.5);
    float tp;
    tp = i1;
    int2 i2(1234, 200.2);
    i2 = i1;
    i2.display();
    cout << "tp: " << tp << endl;

    return 0;
}
