#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
// int main(){
//     string s;
//     getline(cin,s);
//     string s1;
//     getline(cin,s1);
    //cout<<s.length()<<s1.size(); // hello world ans 5 5//start with 1
    //s.resize(2);
    //s1.resize(3);
    //cout<<s<<s1;//hello world ans he  wor
    //s.resize(10);
    //cout<<s.length();//ans is 10 
    // s.resize(7,'@');
    // cout<<s;//hello  ans hello@@
    // s.resize(2,'*');
    // cout<<s; //hello ans he 
    //if you dont know the length of the string then you 
    //can do this
    //s.resize(s.length()+2,'#')// hello ans hello##
    //cout<<s.at(2); //hello ans 01233 ans is l
    //if you want to chage some charactor then you can
    // s.at(1)='N';//start with 0
    // cout<<s;//hello == hNllo ans
    // s.at(10)='Y';
    // cout<<s;//input is hello //its out of the range it terminate and return std::out_of_range
    // s+=s1;
    // cout<<s;//hello world == hellowordl
    
    //cout<<s.substr(6,5);//start with 123456tel ans is tel
//    cout<<s.substr(6);
// cout<<s.find(s1); //i/o=abc abc abc ab 0 // if can not find then return std::string::npos
                 //starting with 0 // return first occurance position

// cout<<s.find(s1,3);//check after 3 position and return first occurance 
//}
// int main(){//this is use to input more and more this while# is not encounter
//     string s,s1;
    
//     do{
//         getline(cin,s);
//         s1+=" ";
//         s1+=s;
//     }
//     while(s!="#");
//     cout<<s1;

// }
// int main(){//use to remove charactore .. input  helloaaa nehaa
// //output hello neh
//     int i;
//     string s,s1;
//     getline(cin,s);
//     for(i=0;i<s.length();i++){
//         if(s.at(i)!='a')
//         s1+=s.at(i);
//     }
//     cout<<s1;
// }
// int main(){
//     int n,i;
//     int flag;
//     cin>>n;
//     if(n==0 || n==1)
//     flag=1;
//     else{
//         for(int i=2;i<=sqrt(n);i++){
//             if(n%i==0)
//             flag=0;
//             break;
            
//         }

//     }
    

//     if(flag)
//     cout<<" prime";
//     else
//     cout<<"not prime";
// }
// int main(){
//     string s;
//     int p;
//     getline(cin,s);
//     string s1;
//     getline(cin,s);
//     int l=s.length();
//     do{
        
//      p=s.find(s1);
//         cout<<p;
//         l--;

//     }
//     while(l>0 && p!=string::npos);
// }
#include <iostream>
#include <string>
using namespace std;

// int main() { use to find substr position in string input - abc abc abc abc
//output
// ab 
// 0
// 4
// 8
// 12
//     string s;
//     getline(cin, s);
//     string s1;
//     getline(cin, s1);

//     if (s1.empty()) {
//         cout << "Error: input string is empty." << endl;
//         return 1;
//     }

//     int l = s.length();
//     int p=-1;
//     do {
//         p = s.find(s1,p+1);
//         if(p!=-1)
//         cout << p << endl;
        
        
//     } while (p != string::npos);

//     return 0;
// }
//  int main(){ // to count how many time substr is present //i-o abc abc abc abc
// // a 
// // 4
//     string s;
//     getline(cin,s);
//     string s1;
//     getline(cin,s1);
//     int p=-1;
//     int x=0;

//     do{

// p=s.find(s1,p+1);
// if(p!=-1)
// x++;


//     }
//     while(p!=-1);
//     cout<<x;
//  }
//if you want to convert all letter in upper or lower case then do this 
// for(i=0;i<s.length();i++)
// s.at(i)+32 or s.at(i)-32;
// int  main(){//one two three // output - one two zero three
//     string s;
//      getline(cin,s);
//      string s1;
//      getline(cin,s1);
//      int p=-1;
//      int l;
//      do{
//         p=s.find(" ",p+1);
//         if(p!=-1)
//         l=p;
//      }
//      while(p!=-1);
//      cout<<s.substr(0,l)+s1+s.substr(l,s.length());
     
// }
// int  main(){  // remove some words // i love my life you are my hello my friend
//              // i love life you are hello friend
//     string s;
//      getline(cin,s);
//      string s1;
//      getline(cin,s1);
//      int p=-1;
//      //int l;
//      do{
//         p=s.find(s1,p+1);
//         if(p!=-1)
//         s=s.substr(0,p)+s.substr(p+s1.length());
//      }
//      while(p!=-1);
//      cout<<s;
     
// }
// int  main(){// replace wwords
// //input//     i love my life you are my hello my frined
// // my
// // your
// //out// i love your life you are your hello your frined
//     string s;
//      getline(cin,s);
//      string s1;
//      getline(cin,s1);
//      string s2;
//      getline(cin,s2);
//      int p=-1;
//      int l;
//      do{
//         p=s.find(s1,p+1);
//         if(p!=-1)
//         s=s.substr(0,p)+s2+s.substr(p+s1.length());
//      }
//      while(p!=-1);
//      cout<<s;
     
// }
/* so IMPORTTANT */

// Here's a list of string functions in C++ and whether they start counting from 0 or 1:

// Counting from 0:
// find()
// rfind()
// find_first_of()
// find_last_of()
//rfind()= find from the last
// find_first_not_of()
// find_last_not_of()
// substr()
// replace()
// erase()
// insert()
// push_back()

// Counting from 1:
// length()
// size()
// max_size() // depends upon compiler 
// capacity()
// resize()
// reserve()
// clear()
// empty() // return boolean
// compare()
// swap()


// int main(){ // how to creat string object
//     string s1;
//     getline(cin,s1);//allow space
//     string s2("abc hello ");
//     string s3;
//     cin>>s3;// terminate after space
//     cout<< s1<< s2<< s3;
// }
// int main(){
//     string s1;
//     getline(cin,s1);
//     cout<<s1.capacity();
// }
// int main(){
//     string s2;
//     getline(cin,s2);
//     string s1;
//     getline(cin,s1);
//     if(s1==s2)
//     cout<<"equal";
//     else if(s1>s2)
//     cout<<"s1 greter" ;
//     else
//     cout<<"s2 greter";
//     //cout<<s1>s2;
//     cout<<s1.compare(s2);

// }
// int main(){
//     string s;
//     getline(cin,s);
//     string s1;
//     getline(cin,s1);
//     cout<<s.replace(4,1,"/")<<endl; // hello neha hello prit  == hell/ neha
//     cout<<s.erase(5)<<endl;     //==hell/
//     cout<<s1.insert(10,s)<<endl; //hello prithell/
//     int x=s.compare(0,s1.size(),s1); //o>/ return -1;
//     cout<<x<<endl;
//     s1=s.substr(5,3);//hell/ have only 5 charactore so return null
//     cout<<s1;
// }
//################################################################
//in summary, max_size() returns the theoretical maximum size that a container can reach, while capacity() returns the current storage capacity of the container.
// int main(){
//     string s("hello nehss ?1");
    
//     cout<<s.capacity();
//     s.pop_back(); // delete last charactore of the given string 
//     cout<<s;
//     cout<<s.capacity()<<'\n';
//     s.resize(10);
//     cout<<s.capacity()<<"\n";
//     s.shrink_to_fit();
//     cout<<s.capacity()<<'\n';

    
    
// }
// int main(){
//     string s("ABCD");
//     cout<<s.capacity();
//     s.reserve(20);
//     cout<<s.capacity();
//     s.resize(3);
//     cout<<s.capacity();
//     s.shrink_to_fit();
//     cout<<s.capacity();
//     s.reserve(40);
//     cout<<s.capacity();
// }
// output
// 15
// 30
// 30
// 15
// 40
// int main(){
//     string s1("123");
//     int s=0;
//     for(int i=0;i<s1.length();i++){
//         s=s+s1.at(i);
//     }
//         s=s-48*s1.length();
//         cout<<s<<"\n";

    
    
// }
// int main(){ // if reverce string then prit yes to behave like strrev
// string s;
// cin>>s;
// for(int i=0;i<s.length()/2;i++){
//     if(s.at(i)!=s.at(s.length()-i-1)){
//         cout<<"no"<<"\n";
//         break;
//     }
//         else
//         cout<<"yes";
    
// }
// }
// int main(){ //use to convert in upper case
//     string s;
//     char r[2];
//     cin>>s;
//     for(int i=0;i<s.length();i++){
//         char ch=s.at(i);
//         if(ch>=97 && ch<=122){
//             r[0]=ch-32;
//             s.replace(i,1,string(r));
//         }
//     }
//     cout<<s<<"\n";
// }
// int main(){ // use like caser ciopher 
// // hello
// // IFMMP // increment by 1 also in upper
//     string s;
//     char r[2];
//     r[1]='\0';
//     cin>>s;
//     for(int i=0;i<s.length();i++){
//         if(isalpha(s.at(i))){
//         r[0]=toupper(s.at(i)=='Z'?'A':toupper(s.at(i))+1);
//         s.replace(i,1,string(r));
//     }
    
// }
// cout<<s<<flush;
// }
// int main(){
//     string s1("we love to walk");
//     if(s1.at(4)==s1[4]){
//         s1=s1.substr(8,7);
//         cout<<s1;
//     }
//     else 
//     s1.replace(7,4,"hate");
    
// }
//###########################################################################
//1
// int main(){
//     string s,s1,s2;
//     cin>>s>>s1>>s2;
//     string s3;
//     s3=s+" "+s1+" "+s2;
//     cout<<s3;
//     string s4;
//    s4.append(s);
//    s4.append(" ");
//    s4.append(s1);
//    s4.append(" ");
//    s4.append(s2);
//    cout<<s4;
// }
//2
// int main(){
//     string s;
//     getline(cin,s);
//     int i=0;
//     while((s.length())!=i){
//         cout<<s.at(i);
//         i++;
//     }
// }
//3
// int main(){
//     int n;
//     cin>>n;
//     string s;
//     while(n!=0){
//         cin>>s;
//         n--;
//         if(s.at(0)=='B' || s.at(0)=='C')
//         cout<<s;
//     }
    
// }
//4
// int main(){
//     string s;
//     getline(cin,s);
//     int p=-1;
//    do{
//     p=s.find(" ",p+1);
//     if(p!=-1)
//     s.replace(p,1,"_");
//    }
//    while(p!=-1);
//     cout<<s;
// }
//5
// int main(){
//     string s;
//     getline(cin,s);
//     int p=-1;
//     int c=0;
//     do{
//         p=s.find('e',p+1);
//         if(p!=-1)
//         c++;
//     }
//     while(p!=-1);
//     cout<<c;
// }
//6
// int main(){
//     string s;
//     getline(cin,s);
//     int p=-1;
//     int c=0;
//   do{
//     p=s.find("It",p+1);
//     if(p!=-1)
//     c++;
//   }
//   while(p!=-1);
//   cout<<c;
// }
//7

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// bool compare(string a,string b){
//     return a<b;
// }

// int main(){
//     int n;
//     cin>>n;
//     int i,j;
   
//     vector<string> y;
//     string s;
//     cin.ignore();
//     for(i=0;i<n;i++){
//         getline(cin,s);
//         y.push_back(s);
//     }
//     sort(y.begin(),y.end(),compare);
//     for(i=0;i<n;i++){
//         cout<<y[i]<<endl;
//     }
//     return 0;
// }
    
//      1
//    2 3 2
//  3 4 5 4 3
//  4 5 67 6 5 4
// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     string s = "123456";
//     int n = s.size();
//     int width = (n - 1) * 2 + 1;

//     for (int i = 0; i < n; i++) {
//         // print leading spaces
//         for (int j = 0; j < (width - (i * 2 + 1)) / 2; j++) {
//             cout << " ";
//         }

//         // print left half
//         for (int j = 0; j <= i; j++) {
//             cout << s[j] << " ";
//         }

//         // print right half
//         for (int j = i - 1; j >= 0; j--) {
//             cout << s[j] << " ";
//         }

//         // print trailing spaces
//         for (int j = 0; j < (width - (i * 2 + 1)) / 2; j++) {
//             cout << " ";
//         }

//         // print newline
//         cout << endl;
//     }

//     return 0;
// }
