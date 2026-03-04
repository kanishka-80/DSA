#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    int N;
    cin>>N;
    int n;
    cin>>n;
    int price[n];
    for(int i=0;i<n;i++){
        cin>>price[i];
    }
    int M;
    cin>>M;
    for(int i=1;i<=T;i++){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
              if(price[i]+price[j]==M){
                  if(price[i]<=price[j]){
                    cout<<"Deepak should buy roses whose prices are"<<price[i]<<" and "<<price[j];
                   }
                  else{
                    cout<<"Deepak should buy roses whose prices are"<<price[j]<<" and "<<price[i];
                  }
                }
            }
        }  
    }
}