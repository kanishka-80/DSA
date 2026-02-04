#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m=(n+1)/2;
    for(int i=1;i<=m;i++){
        //outer space
        for(int sp=1;sp<=m-i;sp++){
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"* ";

        }

        cout<<endl;
    }
    for(int i=m-1;i>=1;i--){
        //outer space
        for(int sp=1;sp<=m-i;sp++){
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"* ";

        }
        
        cout<<endl;
    }
}