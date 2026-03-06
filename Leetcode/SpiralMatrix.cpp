#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int r=matrix.size();
    int c=matrix[0].size();
    int left=0,right=c-1,top=0,bottom=r-1;
    vector<int> ans;
    while(left<=right and top<=bottom){
        //left to right
        for(int i=left;i<=right;i++){
            //top
            ans.push_back(matrix[top][i]);
        }
        top++;
        //top to bottom
        for(int i=top;i<=bottom;i++){
            //right
            ans.push_back(matrix[i][right]);
        }
        right--;
        if(top<=bottom){
            //right to left
            for(int i=right;i>=left;i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        if(left<=right){
            //bottom to top
            for(int i=bottom;i>=top;i--){
                ans.push_back(matrix[i][left]);
            }
        }
        left++;
    }
    return ans;
    }
    