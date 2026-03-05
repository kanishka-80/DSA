#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int nums[n];
    int sum=0;

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            sum[ ]=nums[i]+nums[j];
        }

    }
}