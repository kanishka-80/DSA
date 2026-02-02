#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        cout<<i;
            for(int z=1;z<=i-2;z++){
                cout<<0;
            }
        if(i!=1){
            cout<<i;
        }
        cout<<endl;
        }

return 0;
}