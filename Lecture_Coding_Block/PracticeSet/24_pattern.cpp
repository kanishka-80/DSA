#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int sp=1;sp<=n-i;sp++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
        
        if(j%2==0){
            cout<<0;
        }
        else{
            cout<<1;
        }
    }
        cout<<endl;
    }
}