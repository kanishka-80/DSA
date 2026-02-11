#include<iostream>
#include<cmath>
using namespace std;
//code is correct but output is wrong
int main(){
    int n,sum=0,temp,og;
    cin>>n;
    og=n;
    temp=n;
    int l=0;
    while(temp!=0){
        temp=temp/10;
        l++;
    }
    while(n!=0){
        int r=n%10;
        sum=sum+pow(r,l);
        n=n/10;
     }
    if(sum==og){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not an Armstrong Number";
    }
    return 0;
}