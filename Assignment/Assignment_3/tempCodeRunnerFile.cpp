#include<iostream>
using namespace std;

int main(){

    while(true){
    int n;
    cin>>n;
    int arr[n],sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum<0){
            break;
        }
        else{
            
            cout<<arr[i]<<endl;
        }
    }
}
}