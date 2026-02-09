#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int ans=INT_MAX; // -infinity
    for(int i=0;i<n;i++){
        if(ans>arr[i]){
            ans=arr[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}