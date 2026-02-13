#include<iostream>
using namespace std;

int main(){
    int n,a=0,b=1,c;
    cin>>n;
    int count=0;
    for(int i=0;i<=count;i++){
        if(count==n){
            cout<<a<<endl;
            break;
        }
        // cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
        
       count++;
    }
     
}