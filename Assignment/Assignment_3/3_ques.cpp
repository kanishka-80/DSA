#include<iostream>
using namespace std;
 // Inverse of number ex: 32145 -> 12543
 int inverse(int n){
    int inv=0,i=1,unique=1;

    while (n>0)
    {
        int r=n%10;
        p=r*i;
        inv=inv+p;
        n=n/10;
        i++;
    }
    return inv;
 }
int main(){
    int n,inv=0,og=0;
    cin>>n;
    og=n;
    int i=1;
    
    inv=inverse(n);
    cout<<inv<<" "<<og<<endl;
    return 0;
}