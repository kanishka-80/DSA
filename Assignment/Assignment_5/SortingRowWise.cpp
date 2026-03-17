#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int k=0;k<c-1;k++){
             for(int j=0;j<c-1;j++){
                if(arr[i][j]>arr[i][j+1]){
                  swap(arr[i][j],arr[i][j+1]);    
                }
            }
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
