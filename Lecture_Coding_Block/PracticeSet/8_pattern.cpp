#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int m=(N+1)/2;
    for(int i=1;i<=m;i++){
        for(int sp=1;sp<=((N/2)-(i-1))*2;sp++){
            cout<<" "<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        //inner space
        for(int sp=1;sp<=2*i-3;sp++){
            cout<<" "<<" ";
        }
        if(i!=1){
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=m-1;i>=1;i--){
        for(int sp=1;sp<=((N/2)-(i-1))*2;sp++){
            cout<<" "<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        //inner space
        for(int sp=1;sp<=2*i-3;sp++){
            cout<<" "<<" ";
        }
        if(i!=1){
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }

return 0;
}