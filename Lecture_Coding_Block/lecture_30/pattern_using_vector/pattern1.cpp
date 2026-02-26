#include<iostream>
#include<vector>
using namespace std;

int main(){
    int r,c;
    cin>>r>>c;
    vector<vector<int>> array(r,vector<int>(c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>array[i][j];
        }
    }
        for(int j=0;j<c;j++){
          if(j%2==0){
            for(int i=0;i<r;i++) {
                cout<<array[i][j]<<" ";
            }         
        }
        else{
            for(int i=r-1;i>=0;i--) {
                cout<<array[i][j]<<" ";
            } 
        }
        }
    
    return 0;
}
