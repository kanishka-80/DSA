#include<iostream>
using namespace std;

int digitsum(int n){
    int sum=0;
    while(n!=0){
        int r=n%10;
        sum+=r;
        n=n/10;
    }
    return sum;
}
bool prime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
int n,sum=0,factor=0;
cin>>n;
sum=digitsum(n);
for(int i=2;i<=n;i++){
    while(n%i==0){
        if(prime(i)){
            factor+=digitsum(i);
        }
        n=n/i;
    }

}
cout<<sum<<endl;
cout<<factor<<endl;
if(factor==sum){
    cout<<"Boston Number";
}
else{
    cout<<"Not a Boston Number";
}
}