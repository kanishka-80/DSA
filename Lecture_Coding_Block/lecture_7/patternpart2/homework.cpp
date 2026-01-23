#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i =1;i<=n;i++){
        for(int sp=1;sp<=n-i;sp++){
            cout<<"  ";
        }
        //total pattern
        for(int j=1;j<=2*i-1;j++){
            if(j%2==0){
                cout<<"! ";
            }else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
   return 0;
}
   
    
 
 
  
