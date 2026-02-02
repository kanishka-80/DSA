#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        for(int sp =1;sp<=N-i;sp++){
            cout<<"  ";
        }
        for(int j=N;j>=i;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    
    }
    return 0;
}