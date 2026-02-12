#include<iostream>
using namespace std;
 // Inverse of number ex: 32145 -> 12543
int main(){
    int n,inv=0,og=0;
    cin>>n;
    og=n;
    int i=1;
   while (n>0)
   {
    int r=n%10;
    inv=inv*10+(i*r);
    n=n/10;
    i++;
   }
       
     
    
    cout<<inv<<" "<<og<<endl;
    return 0;
}