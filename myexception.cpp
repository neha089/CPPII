#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include<exception>

using namespace std;
//!
// int main(){
//     int n,m;
//     cin>>n>>m;
//     try{
//         if(m==0){
//         throw m;
//         }
//          cout<<n/m;
//     }
    
//     catch(...){
//         cout<<"caugth" <<m;
//     }
    
// }
//!
#include <iostream>
#include <exception>

class d : public std::exception {
public:
    const char* what() const throw() {
        return "caught";
    }
};

int main() {
    int n, m;
    std::cin >> n >> m;
    try {
        if (m == 0) {
            d a;
            throw a;
        }
        std::cout << n / m;
    }
    catch (const d& obj) {
        std::cout << obj.what();
    }

    return 0;
}
