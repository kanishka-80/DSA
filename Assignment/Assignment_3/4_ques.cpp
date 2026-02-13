#include<iostream>
using namespace std;
// counting  the number of times digit d is present in the number

int countDigit(int n ,int d){
    int count =0;
    while(n>0){
        int r=n%10;
        if(r==d){
            count++;
        }
        n=n/10;
    }
    return count;
}
int main(){
    int n,d;
    cin>>n>>d;
    cout<<countDigit(n,d)<<endl;
    return 0;
}