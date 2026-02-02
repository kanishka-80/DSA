#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
     for (int i=1;i<=n;i++){
         for(int sp=1;sp<=n-i;sp++){
            cout<<"  ";
         }
            for(int j=1;j<=i;j++){
                cout<<"* ";
         }
        
        for(int k=1;k<i;k++){
            cout<<"* ";
        }
        for(int l=1;l<=n-i;l++){
            cout<<"  ";
        }
        cout<<endl;
     }
     for (int i=n-1;i>=1;i--){
         for(int sp=1;sp<=n-i;sp++){
            cout<<"  ";
         }
            for(int j=1;j<=i;j++){
                cout<<"* ";
         }
        
        for(int k=1;k<i;k++){
            cout<<"* ";
        }
        for(int l=1;l<=n-i;l++){
            cout<<"  ";
        }
        cout<<endl;
     }
    return 0;
    }