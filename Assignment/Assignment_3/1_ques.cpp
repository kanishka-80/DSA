#include<iostream>
using namespace std;
 //addition of even places digits and odd places digits
int main(){
    int n,even_sum=0,odd_sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        int r=n%10;
        if(i%2==0){
            even_sum+=r;
            cout<<even_sum<<endl;
        }
        else if(i%2==1){
            odd_sum+=r;
            cout<<odd_sum<<endl;
        }
     n=n/10;  
    }
    return 0;
}