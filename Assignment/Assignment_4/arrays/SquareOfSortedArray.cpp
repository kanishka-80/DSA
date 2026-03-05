#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int nums[n];
    int sq[n];
    int sortedsq[n];
    for(int i=0;i<n;i++){
       cin>>nums[i];
    }
   for(int i=0;i<n;i++){
    nums[i]*=nums[i];
   }    
   sort(nums,nums + n);
   for(int i=0;i<n;i++){
    cout<<nums[i]<<" ";
   }
}   

