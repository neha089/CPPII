#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    string str1="these are";
    string str2="string handling ";
    string str3="function";
   string res1=str1+" "+str2+" function";
   string res2;
   res2.insert(0,res1.substr(0,10));
res2+=str3;
cout<<res1<<endl;

cout<<res2<<endl;
cout<<res1.length()<<endl;


}