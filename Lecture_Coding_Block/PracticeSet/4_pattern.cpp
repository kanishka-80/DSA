#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){
        //star
         for(int j=1;j<=n-i+1;j++){
             cout<<j;
      }
      //spaces
         for(int sp=1;sp<=2*i-3;sp++){
        cout<<" ";
         }
    if(i==1){
        for(int j=n-1;j>=i;j--){
            cout<<j;
             }
         }
         else{
            for(int j=n-i+1;j>=1;j--){
            cout<<j;
         }
        }
 cout<<endl;
    }
return 0;   
}