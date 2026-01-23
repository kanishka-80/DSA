#include<iostream>
using namespace std;

int main(){
    int n;  
    cin>>n;   
    int a=1; 
    for(int i=1;i<=n;i++){
        for(int sp=1;sp<=n-i;sp++){
            cout<<"\t ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<a++<<"\t ";
        }
        cout<<endl; 
    }
return 0;   
}