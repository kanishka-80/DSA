#include<iostream>
using namespace std;

int main(){
    int n,rev=0;
    cin>>n;
    //while loop
    while(n!=0){
        int r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    cout<<rev;

    //for loop
    for(int i=n;i!=0;i=i/10){
        int r=i%10;
        rev=rev*10+r;
    }
    cout<<rev;
    return 0;
}