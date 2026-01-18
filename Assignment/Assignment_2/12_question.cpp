// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
 int n,sum=0,digit;
 cin>>n;
 while(n>0){
     digit=n%10;
     sum=sum+digit;
     n=n/10;
     }
    
  cout<<sum<<endl;
    return 0;
}

 