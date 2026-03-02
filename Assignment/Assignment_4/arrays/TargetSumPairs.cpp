#include<iostream>
using namespace std;

int targetSum(int arr[], int n, int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                if(arr[i]<arr[j]){
                    cout<<arr[i]<<" and "<<arr[j]<<endl;
                }
                else{
                cout<<arr[j]<<" and "<<arr[i]<<endl;
                }
            }
        }
    }
    return 0;
}
int main(){
    int n,target;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>target;
    targetSum(arr,n,target);
    return 0;
}