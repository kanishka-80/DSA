#include<iostream>
using namespace std;
// Series of 3n+2 in which no multiple if n2
int count;

int series(int n1,int n2 ){
    
    for(int i=1;i<=n1;i++){
        int s=3*i+2;
        if(s%n2!=0){
        cout<<s<<endl;
            count++;
        }
    }
}
int main(){
    int n1,n2;
    int count =1;
    cin>>n1>>n2;
    cout<<series(n1,n2)<<endl;
return 0;
}