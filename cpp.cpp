#include <iostream>
using namespace std;
/* int main(){
char str[4]="ram";//in cpp we must include space for null charactore.
cout<<str;
} */
 /* int main(){
    void*vptr;
    char *cptr;
    //vptr=cptr;   valid in c and cpp
    //cptr=vptr;  valid in c but not in cpp.. cpp cannot do implisit type casting
    //cptr=(char*)vptr; valid in both
} */
 /* int main(){
    int a[5]={1,2};
    int &r=a;//array of reference cannot be created.
    cout<<r;
} */
/* int main(){
    int a[5]={1,2};
    int &r=a[3];//reference of particular elemnt of array.
    cout<<r;
} */
 /*int main(){
int a[5]={1,2};
    int (&r)[5]=a;//must include () here ..operatore presidency ..r is reference to whole array a /
    cout<<r[1];
}*/
/* int main(){
    int i=10;
    int &ir=i; //this is valid 
    int *irp=&ir;
    cout<<i<<ir<<*irp;
    
} */
/* int main(){
    int i=10;
    int &ir=i; 
    int &*irp=&ir;//pointer to reference data type is not allow...
    cout<<i<<ir<<*irp;
} */
/* int main(){
    int i=10;
    int *ip=&i; 
    int *&irp=ip;//reference to pointer is valid ...  in reference not inislize address..
    cout<<i<<*ip<<*irp;
} */
/*int main(){
    int i=10;
    float const &ir=i; //must include const key word here otherwise erro is occupie.
    ;
    cout<<i<<ir;
}*/
/* int main(){
    const int i=10;
    int const  &ir=i; //must include const key word here otherwise erro is occupie.
  //if both data types are not same then must add const keyword

    cout<<i<<ir;
}*/
/* int main(){
    int i=10;
    int  const &ir=i;//if you not here const here then thats also ok..
    ;
    cout<<i<<ir;
}*///...........................................................................
 /* int fun(int &num) {
 cout << num << endl;
 num++;
 return num;
}
int main() {
 int i = 10;
 int res = fun(i);
 int & ret_val = fun(i);
 fun(i) += 2;
 cout << i << " " << res << " " << ret_val << endl;
 cout << &i << " " << &res << " " << &ret_val << endl;
 return 0;
}*/
 /* const int &fun(int &num) {//must add const
 cout << num << endl;
 num++;
 // returning reference to temporary
 return num +1;//temp variable ma +1 . then stack will be deleted and temp also deleted sp not returning anything
} // temp=num;
   // return temp;
   // then do +1 but its lost;
int main() {  
 int i = 10;
  const int &ret_val = fun(i);//const
 cout << i << " " << " " << ret_val << endl;
 cout << &i << " " << " " << &ret_val << endl;
 return 0;
} */
/*
const int &fun(int &num) {
 cout << num << endl;
 num++;
 // returning reference to temporary, hence invalid code
 return num++;
 //temp=num;
 //num++;
 //return temp;
}
int main() {
 int i = 10;
 const int &ret_val = fun(i);
 cout << i << " " << " " << ret_val << endl;
 cout << &i << " " << " " << &ret_val << endl;
 return 0;
} */
/* const int &fun(int &num) {
 cout << num << endl;
 num++;
 return ++num;//change in value of i not create any temp variable before returning
}   //if there is num+=1; then also same output
int main() {
 int i = 10;
 const int &ret_val = fun(i);// everthing goin good
 cout << i << " " << " " << ret_val << endl;
 cout << &i << " " << " " << &ret_val << endl;
 return 0;
} */
/* int main(){
    int i;
    for(auto i = 3u; i >0; i--)//when its i>=0 the its become cycle
 std::cout << i << " ";
} 
*/
 /* int main(){
    auto f = 3.14;
 const int  &r = f;  //f is in double data type r convert in to temp variabl temp have
//have value 3 we are changing f 4.14 so the output will be 4.14 and 3
f = 4.14;
std::cout << f << " " << r;
} */
 /* int main(){
    int a[5]={1,2,3,4,5};
    int*da=(int*)(malloc(10*sizeof(int)));//must do type casting in cpp
    if(da==nullptr)
    cout<<"no";
    else
    for(int i=0;i<10;i++){
        cin>>da[i];

    }
    for(int i=0;i<10;i++){
        cout<<da[i];
    }
    free(da);
} */

#include <iostream>
#include <cstdlib>

using namespace std;
 /*
int main() {
    int *a = (int*) malloc(5 * sizeof(int)); // allocate memory for 5 integers
    if (a == nullptr) {
        cout << "Memory allocation failed";
        return 1;
    }
    else {
        // initialize the array
        for (int i = 0; i < 5; i++) {
            a[i] = i + 1;
        }
        int *va = (int*) realloc(a, 10 * sizeof(int)); // reallocate memory for 10 integers
        if (va == nullptr) {
            cout << "Memory reallocation failed";
            free(a);
            return 1;
        }
        else {
            a = va; // update the pointer to the new memory location
            // read new values into the array
            for (int i = 5; i < 10; i++) {
                cin >> a[i];
            }
            // print the array
            for (int i = 0; i < 10; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    free(a); // release the allocated memory
    return 0;
}
*/
/* #include<iostream>

int *fun() {
 int *num_ptr = new int(7);
 cout << *num_ptr << " " << num_ptr << endl;
 return num_ptr;
}
int main() {
 int *ptr = fun();
 cout << *ptr << " " << ptr << endl;
 delete ptr; 
 //ptr is a dangling pointer from here on
 //using ptr will result in undefined behaviour
 cout << *ptr << " " << ptr << endl;
 return 0;
}*/
 /* #include<iostream>

int *fun() {
 int *num_ptr = new int(7);
 cout << *num_ptr << " " << num_ptr << endl;
 return num_ptr;
}    //new have one pointer which point to thats allocated location and value if we delete that variable then allocate memory will be delted not that pointer
int main() {
 int *ptr = fun();
 cout << *ptr << " " << ptr << endl;
 delete ptr; 
 //ptr is a dangling pointer from here on
 //using ptr will result in undefined behaviour
 cout << *ptr << " " << ptr << endl;
 return 0;
} */
/* #include<iostream>
std::ostream & have_fun(std::ostream &output)
{
output <<  "Have Fun";
return output;
}
int main()
{
std::cout << "Hello there,";
std::cout << have_fun << ", you guys!!" << std::endl;
(have_fun(std::cout) << ", you guys!!");
return 0;
} */
/* #include<iostream>
using namespace std;
namespace nspace
{
int x = 11; 
void fun()
{
cout << "Hello!" << endl;
}
}
int main()
{
//fun();
nspace::fun();
//cout << x << endl;
cout << nspace::x << endl;
return 0;

}*/
/* using namespace std;
namespace nspace
{
int x = 11; 
void fun()
{
cout << "Hello!" << endl;
}
}
using nspace::fun; //using declaration
int main()
{
fun();
nspace::fun();
//cout << x << endl;
cout << nspace::x << endl;
return 0;
}*/
  /* #include<iostream>
using namespace std;
namespace nspace
{
int x = 11; 
void fun()
{
cout << "Hello!" << endl;
}
}
using namespace nspace; //using directive
int main()
{
fun();
nspace::fun();
cout << x << endl;
cout << nspace::x << endl;
return 0;
} */
/* #include<iostream>
using namespace std;
int x = 10; 
namespace nspace
{ 
void fun()
{
int x = 30; 
cout << x << " " << nspace::x << " " << ::x << endl;

}
}
using namespace nspace;
int main()
{
nspace::fun();
cout<<x;
return 0;
} */
 /* #include<iostream>
int x = 1;
namespace nspace
{
int x = 2;
int y = 3;
}
int main()
{
int y = 4;
using nspace::x;
std::cout << x << " " << y << " ";
int fun();
fun();
return 0;
}
int fun()
{
std::cout << x;
} */
/* #include<iostream>
namespace test {
int x = 7;
}
namespace test2 {
using test::x;
}
int main() {
std::cout << test2::x;
return 0;
} */
/*
#include<iostream>
int x = 1;
namespace nspace
{
int x = 2;
int y = 3;
int z = 4;
}
int main()
{
int y = 5;
using namespace nspace;
//std::cout << " " << x;
std::cout << " " << ::x;
//std::cout << " " << y;
//std::cout << " " << ::y;
std::cout << " " << z;
//std::cout << " " << ::z;
void fun();
fun();
return 0;
}
void fun()
{
std::cout << " " << x;
}
*/
/* #include<iostream>
int x = 1;
namespace nspace
{
int x = 2;
int y = 3;
int z = 4;
}
using namespace nspace;
int main()
{
int y = 5;

//std::cout << " " << x;
std::cout << " " << ::x;
std::cout << " " << y;
std::cout << " " << ::y;
std::cout << " " << z;
std::cout << " " << ::z;
void fun();
fun();
return 0;
}
void fun()
{
//std::cout << " " << x;
} */
// #include<iostream>
// int x = 1;
// namespace test {
// namespace test2 {
// int x = 2;
// }
// namespace test3 {
// using namespace test2;
// void fun() {
// std::cout << x;
// //std::cout << test::x;
// std::cout << " " << ::x;
// }
// }
// }
// int main() {
// test::test3::fun();
// return 0;
// }
// int main(){
    // int /*i*/,j;
    // cout<<"i+j="i;
    // cin>>i;>>j;
    // cout<<"name";
    // int x=0,y=1;
    // // cout<<y/x;
    // cout<<"*\n**\n**\n****";
    // char c=;
    // int c1=12;
    // cout<<"*"<<int(c)<<"*"<<int(c);
    // cout<<"*"<<c1<<"*"<<c1;
    // bool b=-2.3;
    // cout<<b;
    // int m;
    // int &n=m;
    
    // cout<<m<<n;
    // int m=2;
    // int &n=m;
    // int x=9;
    // int &x=m;
    
    
// }
// #include <iostream>
// using namespace std;
  
// // A linked list node
// struct Node {
//     int data;
//     struct Node* next;
// };
  
// /* Given a reference to pointer to the head of
//    a list, insert a new value x at head */
// void push(struct Node *&head, int x)
// {
//     struct Node* new_node = new Node;
//     new_node->data = x;
//     new_node->next = head;
//     head = new_node;
// }
  
// // This function prints contents of linked
// // list starting from head
// void printList(struct Node* node)
// {
//     while (node != NULL) {
//         cout << node->data << " ";
//         node = node->next;
//     }
// }
  
// /* Driver program to test above functions*/
// int main()
// {
//     /* Start with the empty list */
//     struct Node* head = NULL;
//     push(head, 1);
//     push(head, 2);
//     push(head, 3);
  
//     printList(head);
  
//     return 0;
// }
// Output:
// void *allocate(int size) {
//  void *ptr = malloc(size); // lifetime starts
//  if(NULL == ptr) {
//  cout << "Memory allocation failed" << endl;
//  exit(-1);
//  }
//  return ptr;
//  free(dyn_arr);
// }
// int main() {
//  int *dyn_arr = (int *)allocate(10 * sizeof(int));
//  for(int i = 0; i < 10; i++)
//  cin >> dyn_arr[i];
//  for(int i = 0; i < 10; i++)
//  cout << dyn_arr[i] << " ";
//  cout << endl;
//   //lifetime ends
//  return 0;
// }
// #include<iostream>
// using  namespace std;
// int *fun() {
// int *num_ptr = new int(7);
// cout << *num_ptr << " " << num_ptr << endl;
// return num_ptr;
// }
// int main() {
// int *ptr = fun();
// cout << *ptr << " " << ptr << endl;
// delete ptr; 
// //ptr is a dangling pointer from here on
// //using ptr will result in undefined behaviour
// cout << *ptr << " " << ptr << endl;
// return 0;
// }
// #include<iostream>
// using namespace std;
// int &fun() {
// int &num_ref = *(new int(7));
// cout << num_ref << " " << &num_ref << endl;
// return num_ref;
// }
// int main() {
// int &ref = fun();
// cout << ref << " " << &ref << endl;
// delete &ref; 
// //ref is a dangling reference from here on
// //using ref will result in undefined behaviour
// cout << ref << " " << &ref << endl;
// return 0;
// }

// int main(){

// }
// #include<iostream>
// using namespace std;
// namespace nspace
// {
// int x=20;
// void fun()
// {
// int x = 30; 
// cout << x << " " << " " << ::x << endl;
// }
// }
// int main()
// {
// nspace::fun();
// return 0;
// }
// #include<iostream>
// int x = 1;
// namespace nspace
// {
// int x = 2;
// int y = 3;
// int z = 4;
// }
// int main()
// {
// int y = 5;
// using namespace nspace;
// //error: reference to ‘x’ is ambiguous
// //std::cout << " " << x;
// std::cout << " " << ::x;
// std::cout << " " << y;
// //error: ‘::y’ has not been declared
// //std::cout << " " << ::y;
// std::cout << " " << z;
// //error: ‘::z’ has not been declared
// //std::cout << " " << ::z;
// void fun();
// fun();
// return 0;
// }
// void fun()
// {
// std::cout << " " << x;
// }
// using namespace nspace;
// int main()
// {
// int y = 5;
// //error: reference to ‘x’ is ambiguous
// //std::cout << " " << x;
// std::cout << " " << ::x;
// std::cout << " " << y;
// std::cout << " " << ::y;
// std::cout << " " << z;
// std::cout << " " << ::z;
// void fun();
// fun();
// return 0;
// }
// void fun()
// {
// //error: reference to ‘x’ is ambiguous
// //std::cout << " " << x;
// }
// #include<iostream>
// int x = 1;
// namespace test {
// namespace test2 {

// }
// namespace test3 {
// using namespace test2;
// void fun() {
// std::cout << x;
// //error: ‘x’ is not a member of ‘test’
// //std::cout << test::x;
// std::cout << " " << ::x;
// }
// }
// }
// int main() {
// test::test3::fun();
// return 0;
// }
// #include<iostream>
// // int sum(int n1, int n2, int n3, int n4);
// int sum(int n1, int n2, int n3 = 111, int n4 = 222);
// int main()
// {
        
//         std::cout << "main" << std::endl;
//         std::cout << sum(1, 2, 3, 4) << std::endl;
//        std::cout << sum(1, 2, 3) << std::endl;		// Will get default values from local declaration
//        std::cout << sum(1, 2) << std::endl;	              // Will get default values from local declaration
//         void fun(); fun();
//         return 0;
// }
// int sum(int n1, int n2, int n3 , int n4 )
// {
//         return n1 + n2 + n3 + n4;
// }
// void fun()
// {
    
//         std::cout << "fun" << std::endl;
//         std::cout << sum(1, 2, 3, 4) << std::endl;
//         std::cout << sum(1, 2, 3) << std::endl;		// Default values from definition
//         std::cout << sum(1, 2) << std::endl;		                // Default values from definition
// }
// void fun(float f, int i) {
//     cout << "fun1" << endl;
// }
// void fun(int i, int j) {
//     cout << "fun2" << endl;
// }
// void fun(int i, float f) {
//     cout << "fun3" << endl;
// }

// int main() {
//     fun(true, true);
//     return 0;
// }
// int main(){
//     int a;
//     int sqr(int &);
//     int n[]={1,2,3,4,5};
//     sqr(a);
//     //int *p=new;
    
//     //n[1]==[1]n?cout<<"edw":cout<<"hncd";
// }
// int sqr(int &a){
//     cout<<"nc";
// }
int main(){
    // char c;
    // for(c=0;c<256;c++){
    //     cout<<c;
    // }
    float a=1.2;
    if(a==1.2)
    cout<<"fchjk";
    else
    cout<<"vj";
}
















