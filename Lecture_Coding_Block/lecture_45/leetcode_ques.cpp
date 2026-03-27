// 643 - Maximum Average Subarray
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
     vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        int k;
        cin>>k;
        int sum=0,ans;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        int maxSum=sum;
        for(int i=k;i<n;i++){
            sum=sum+nums[i]-nums[i-k];
            maxSum=max(maxSum,sum);
        }
        cout<<(double)maxSum/k;
    }

// 1343 - Number of Sub-array of size K and Average Greater than or Equal to threshold
// 1456 - Maximum number of vowels in a substring of Given length
