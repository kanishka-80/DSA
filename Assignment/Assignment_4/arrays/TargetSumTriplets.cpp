// #include<iostream>
// #include<algorithm>
// using namespace std;

// int targetSum(int arr[], int n, int target){
//     sort(arr, arr + n);
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             for(int k=j+1;k<n;k++){
//              if(arr[i]+arr[j]+arr[k]==target){ 
//             cout<<arr[i]<<","<<arr[j]<<" and "<<arr[k]<<endl;
//             }
//             }
//         }
//     }
//     return 0;
// }
// int main(){
//     int n,target;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cin>>target;
//     targetSum(arr,n,target);
//     return 0;
// }