#include<iostream>
using namespace std;

int main(){
    int m;      
    cin>>m;
    int n=(m+1)/2;
    for(int i=n;i>=1;i--){
        for(int sp=1;sp<=n-i;sp++){//outer spaces
            cout<<"  ";
        }
        cout<<"*";
        //inner spaces
        for(int sp=1;sp<=2*i-3;sp++){
            cout<<"   ";
        }
        if(i!=1){
            cout<<"*";
        }
        cout<<endl;
        }

     for(int i=1;i<=n;i++){
        for(int sp=1;sp<=n-i;sp++){//outer spaces
            cout<<"  ";
        }
        cout<<"*";
        //inner spaces
        for(int sp=1;sp<=2*i-3;sp++){
            cout<<"   ";
        }
        if(i!=1){
            cout<<"*";
        }
        cout<<endl;
        }
    return 0;
}
