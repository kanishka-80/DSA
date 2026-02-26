#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    vector<vector<int>> array(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>array[i][j];
        }
    }
    int left=0,right=m-1,top=0,bottom=n-1;
    while(left<=right && top<=bottom){
        //left to right
        for(int i=left;i<=right;i++){
            // top row
            cout<<array[top][i]<<" ";
        }
        top++;
        //top to bottom
        for(int j=top;j<=bottom;j++){
            // right column
            cout<<array[j][right]<<" ";
        }
        right--;
        if(top<=bottom){
            // right to left
            for(int i=right;i>=left;i--){
                cout<<array[bottom][i]<<" ";
            }
            bottom--;
        }
        if(left<=right){
            for(int j=bottom;j>=top;j--){
                cout<<array[j][left]<<" ";
            }
            left++;
        }
    }
    return 0;

}