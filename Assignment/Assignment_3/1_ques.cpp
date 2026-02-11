#include<iostream>
using namespace std;
 //addition of even places digits and odd places digits
int main(){
    int n,even_sum=0,odd_sum=0;
    cin>>n;
    int i=1;
   while (n>0)
   {
    int r=n%10;
    if(i%2==0){
        even_sum+=r;
    }
    else{
        odd_sum+=r;
    }
    n=n/10;
    i++;

   }
       
     
    
    cout<<even_sum<<" "<<odd_sum<<endl;
    return 0;
}