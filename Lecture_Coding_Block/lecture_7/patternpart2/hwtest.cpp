#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int k =1;k<=n;k++){
          if(k%2==0){
                cout<<"! ";
            }
        for(int j=1;j<=k;j++){
          
             if(j%2==0){
                cout<<"! ";
            }
    
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }

return 0;
}