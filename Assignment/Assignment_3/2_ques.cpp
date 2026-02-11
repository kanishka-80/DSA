#include<iostream>
using namespace std;
// Reaplce the 0 with 5 in the given number
int main(){
    int n,new_no=0,og=0;
    cin>>n;
   
    
    while(n>0){
        int r=n%10;
        if(r==0){
            r=5;
        }
        new_no=new_no*10+r;
        n=n/10;
    }
    while(new_no>0){
        int r=new_no%10;
        og=og*10+r;
        new_no=new_no/10;
    }
    cout<<og;
return 0;
}