#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    int sum=0;
    vector<int> ans;
    for(int i=0; i<n; i++){
        sum=sum+nums[i];
        ans.push_back(sum);
    }
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}