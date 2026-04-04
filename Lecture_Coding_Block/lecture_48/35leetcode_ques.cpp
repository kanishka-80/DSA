#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int target;
    cin>>target;
    int start=0, end=n-1;
    while(start <= end){
        int mid=start+(end-start)/2;
        if(a[mid]==target){
            return mid;
        }
        if(a[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    cout<<start;
}