#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int sp=1;sp<=n-i;sp++){
            cout<<"\t ";
        }
        //left half
        for(int j=i;j<=2*i-1;j++){
            cout<<j<<"\t ";
        }
        for(int j=2*i-2;j>=i;j--){
            cout<<j<<"\t ";
        }

        cout<<endl;
    }
return 0;
}