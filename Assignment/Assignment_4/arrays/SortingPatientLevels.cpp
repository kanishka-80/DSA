#include<iostream>
using namespace std;

int SortSeverity(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
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
    SortSeverity(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 
}