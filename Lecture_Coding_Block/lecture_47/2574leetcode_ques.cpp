#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        int totalSum=0;
        int leftSum=0;
        vector<int> answer(n);
        for(int i=0;i<n;i++){
            totalSum+=nums[i];
        }
        for(int i=0;i<n;i++){
            int rightSum=totalSum-leftSum-nums[i];
            answer[i]=abs(leftSum-rightSum);
            leftSum+=nums[i];
        }
        return answer;
    }
};