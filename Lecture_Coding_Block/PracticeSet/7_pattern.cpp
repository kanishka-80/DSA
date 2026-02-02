#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m=(n+1)/2;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m-i+1;j++){
            cout<<"*"<<"\t";
        }
            for(int sp=1;sp<=2*i-3;sp++){
                cout<<"\t";
            }
        if(i==1){
            for(int j=1;j<=m-i;j++){
                cout<<"*"<<"\t";
            }   
        }
        else{
            for(int j=m-i+1;j>=1;j--){
                cout<<"*"<<"\t";
            }
    }
     cout<<endl;  
    }  
     for(int i=m-1;i>=1;i--){
        for(int j=1;j<=m-i+1;j++){
            cout<<"*"<<"\t";
        }
            for(int sp=1;sp<=2*i-3;sp++){
                cout<<"\t";
            }
        if(i==1){
            for(int j=1;j<=m-i;j++){
                cout<<"*"<<"\t";
            }   
        }
        else{
            for(int j=m-i+1;j>=1;j--){
                cout<<"*"<<"\t";
            }
            }
    
     cout<<endl;  
    } 
return 0;  
}



