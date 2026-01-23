#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*  ";
            
        }
        cout<<endl;
    }
    for(int k=n;k>=1;k--){
        for(int l=1;l<=k-1;l++){
            cout<<"*  ";
        }
        cout<<endl;
    }
    
    
     return 0;
}