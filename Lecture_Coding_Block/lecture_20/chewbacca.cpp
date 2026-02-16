#include<iostream>
using namespace std;
//Chewbacca and Number without arrays
int len(int n){
    int count=0;
    while(n>0){
        count++;
        n=n/10;
    }
    return count;
}
int reve(int n){
    int rev=0,t;
    while(n>0){
        t=n%10;
        rev=rev*10+t;
        n=n/10;
    }
    return rev;
}
int main(){
    int n,t,rev=1;
    cin>>n;
    int l=len(n);
    while(n>0){
        t=n%10;
        int inv=9-t;
       if(l==1 && inv==0){
         rev=rev*10+t;
        }
        if(inv>t){
            rev=rev*10+t;
            l--;
        }
        else{
            rev=rev*10+inv;
            l--;
        }
        n=n/10;

    }
    cout<<reve(rev)/10<<endl;  
}