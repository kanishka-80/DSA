#include<iostream>
using namespace std;

int main(){
    int m;      
    cin>>m;
    int n=(m+1)/2;
    for(int i=1;i<=n;i++){ 
        //left stars
        for(int j=1;j<=n-i;j++){
            cout<<"* ";
        }
        //spaces
        for(int sp=1;sp<=2*i;sp++){
            cout<<"  ";
        }
            //right stars
        for(int j=1;j<=n-i;j++){
            cout<<"* ";
        }

        cout<<endl;
    }

        for(int i=n-1;i>=1;i--){ 
        for(int j=1;j<=n-i;j++){
            cout<<"* ";
        }
        for(int sp=1;sp<=2*i;sp++){
            cout<<"  ";
        }
        for(int j=1;j<=n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;   
}