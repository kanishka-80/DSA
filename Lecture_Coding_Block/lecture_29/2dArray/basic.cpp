#include<iostream>
using namespace std;

int main(){
    int arr[][4]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int a[2][3]={{1,2,3},{4,5,6}};
    int m,n;
    cin>>m>>n;
    int b[m][n]={0};
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cout<<b[i][j];
        }
        cout<<endl;
    }
}
