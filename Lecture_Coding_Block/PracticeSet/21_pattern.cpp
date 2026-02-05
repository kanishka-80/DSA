#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
 
    for(int i=1;i<=N;i++){
        
        for(int sp=1;sp<=N-i;sp++){
            cout<<"  ";
        }
        cout<<i<<" ";
        for(int z=1;z<=2*i-3;z++){
            cout<<0<<" ";
        }
        if(i!=1){
            cout<<i<<" ";
        }
        cout<<endl;
        }
return 0;
}