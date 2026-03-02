#include<iostream>
using namespace std;

int ReverseArray(int arr[], int n){
    for(int i=0;i<n/2;i++){
        swap(arr[i],arr[n-i-1]);
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ReverseArray(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}