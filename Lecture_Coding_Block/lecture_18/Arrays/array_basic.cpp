#include<iostream>
using namespace std;

int main(){
    //first way to create
    int n;
    cin>>n;
    //2nd way
    int arr[5];
    arr[0]={1};
    arr[1]={1};
    arr[2]={1};
    arr[3]={1};
    arr[4]={1};

    //3rd way
    int arr_b[]={1,3,2,4};
 
    //read using for loop
    int s=sizeof(arr)/sizeof(int);
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
     cout<<endl;
    //update
     for(int i=0;i<s;i++){
        arr[i]+=i;
    }
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}