#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cin>>n;
    //while loop
    while(n!=0){
        int r=n%10;
        sum=sum+r;
        n=n/10;
    }
    cout<<sum<<endl;

    //for loop
    for(int i=n;i!=0;i=i/10){
        int r=i%10;
        sum=sum+r;
    }
    cout<<sum;
    return 0;
}