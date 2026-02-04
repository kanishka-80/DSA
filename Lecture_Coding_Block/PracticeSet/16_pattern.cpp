#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m=(n+1)/2;
    for(int i=1;i<=m;i++){
        for(int j=i;j<=m;j++){
            cout<<"* ";
        }
        for(int sp=1;sp<=2*i-3;sp++){
            cout<<"  ";
        }
        if(i==1){
            for(int j=1;j<=m-i;j++){
                cout<<"* ";
            }
        }
            else{
                for(int j=m-i+1;j>=1;j--){
                    cout<<"* ";
                }
            }
        
        
           cout<<endl;      
    }
     for(int i=m-1;i>=1;i--){
        for(int j=i;j<=m;j++){
            cout<<"* ";
        }
        for(int sp=1;sp<=2*i-3;sp++){
            cout<<"  ";
        }
        if(i==1){
            for(int j=1;j<=m-i;j++){
                cout<<"* ";
            }
        }
            else{
                for(int j=m-i+1;j>=1;j--){
                    cout<<"* ";
                }
            }
        
        
           cout<<endl;      
    }
   
    return 0;
}