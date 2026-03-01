#include <iostream>
#include <vector>
using namespace std;
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        // transpose
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        // row inverse
        for(int i=0;i<n;i++){
            int j=0,k=m-1;
            while(j<k){
                swap(matrix[i][j],matrix[i][k]);
                j++;
                k--;
            }
        }
    }
int main(){
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    rotate(matrix);     
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }    return 0;
}