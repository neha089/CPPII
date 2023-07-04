#include<iostream>
using namespace std;

// class BaseClass{
//     public:
//         int var_base=1;
//         virtual void display(){
//             cout<<"1 Dispalying Base class variable var_base "<<var_base<<endl;
//         }
// };

// class DerivedClass : public BaseClass{
//     public:
//             int var_derived=2;
//             void display(){
//                 cout<<"2 Dispalying Base class variable var_base "<<var_base<<endl;
//                 cout<<"2 Dispalying Derived class variable var_derived "<<var_derived<<endl;
//             }
// };
// int main(){
//     BaseClass * base_class_pointer;
//     BaseClass obj_base;
//     DerivedClass obj_derived;

//     base_class_pointer = &obj_ba;
//     base_class_pointer->display();
//     return 0;
// }
class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title =  s;
            rating = r;
        }
      virtual void display(){
            cout<<"base";
        }
};
class CWHVideo: public CWH
{
    float videoLength;
    public:
        CWHVideo(string s, float r, float vl): CWH(s, r){
            videoLength = vl;
        }
       virtual void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
        }
};    
class CWHText: public CWH
{
    int words;
    public:
        CWHText(string s, float r, int wc): CWH(s, r){
            words = wc;
        }
  virtual    void display(){
      cout<<"This is an amazing text tutorial with title "<<title<<endl;
      cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
      cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
         }
};
int main(){
    string title;
    float rating, vlen;
    int words;

    // for Code With Harry Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);

    // for Code With Harry Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);

    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
// #include<iostream>
// #include<string>

// using std::cout;
// using std::cin;
// using std::endl;
// using std::string;

// /* Write your code here */
// class person{
    

//  short int age

// protected:

//   string gender

//  stringn name

// public:
    
// };

// int main() {
//     string name, gender, department, designation, employee_since;
//     short age;
//     int yearly_salary;
//     cin >> name >> gender >> age >> department >> designation;
//     cin >> employee_since >> yearly_salary;
//     Employee employee(name, gender, age, department, designation,
//                       employee_since, yearly_salary);
//     Manager manager(employee);
    
//     int direct_reports_count = 0;
//     cin >> direct_reports_count;
    
//     Employee *employee_ptr;
//     for(int i = 0; i < direct_reports_count; i++) {
//         getchar(); // removing newline from input buffer
//         cin >> name >> gender >> age >> department >> designation;
//         cin >> employee_since >> yearly_salary;
//         employee_ptr = new Employee(name, gender, age, department,
//                                     designation, employee_since,
//                                     yearly_salary);
//         manager.add_direct_report(employee_ptr);
//     }
    
//     getchar(); // Removing newline from input buffer
//     string existing_designation, new_designation;
//     cin >> existing_designation >> new_designation;
//     manager.change_designation(existing_designation, new_designation);

//     float increment_percentage;
//     cin >> designation >> increment_percentage;
//     manager.increase_salary(designation, increment_percentage);

//     manager.print();
    
//     return 0;
// }