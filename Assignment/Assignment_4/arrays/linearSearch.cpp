#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int m){
    for(int i=0;i<n;i++){
        if(arr[i]==m){
            return i;
        }   
    }
    return -1;
}
int main(){
    int n,m;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>m;
    int ans=linearSearch(arr,n,m);
    if(ans==-1){
       cout<<-1<<endl;
    }
    else{
        cout<<ans<<endl;
    }
    return 0;
}