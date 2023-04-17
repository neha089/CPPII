#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
int main()
{
    int n;
// cout<<"size of array"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
cout<<"elements are"<<endl;
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
// cout<<"elements are"<<endl;
        cout<<a[i];
    }
// cout<<"value what you want"<<endl;
    int x;//val

    cin>>x;
    int y;//pos
// cout<<"on which position"<<endl;
    cin>>y;
  
    for(int i=0;i<n;i++){
        
        a[y]=x;
        
    }
    for(int i=0;i<n;i++){
// cout<<"elements are"<<endl;
        cout<<a[i];
    }
}