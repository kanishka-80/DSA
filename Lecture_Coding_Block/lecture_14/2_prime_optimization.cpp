#include <iostream> 
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool ans=true;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            ans=false;
        }
    }
    if(ans){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
    return 0;
}


