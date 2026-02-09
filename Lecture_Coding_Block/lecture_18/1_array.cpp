#include<iostream>
using namespace std;

int main(){
    //first way to create
    int n;
    cin>>n;
    //2nd way
    int arr[5];
    //3rd way
    int arr_b[]={1,3,2,4};
 
    //read usinf for loop
    int s=sizeof(arr)/sizeof(int);
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}