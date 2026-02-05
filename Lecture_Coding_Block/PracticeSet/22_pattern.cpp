#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int m=(N+1)/2;
    for(int i=1;i<=m;i++){
        
        for(int sp=1;sp<=m-i;sp++){
            cout<<"  ";
        }
        cout<<" *";
        for(int z=1;z<=2*i-3;z++){
            cout<<"  ";
        }
        if(i!=1){
            cout<<" *";
        }
        cout<<endl;
    }
    for(int i=m-1;i>=1;i--){
        
        for(int sp=1;sp<=m-i;sp++){
            cout<<"  ";
        }
        cout<<" *";
        for(int z=1;z<=2*i-3;z++){
            cout<<"  ";
        }
        if(i!=1){
            cout<<" *";
        }
        cout<<endl;
        }
return 0;
}