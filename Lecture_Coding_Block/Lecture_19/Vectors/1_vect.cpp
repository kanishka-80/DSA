#include<iostream>
#include<vector>
using namespace std;

int main(){
    // initialization
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    // print capacity and size
    cout<<"size "<<a.size()<<endl;
    cout<<"capacity "<<a.capacity()<<endl;
     
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    // to delete
    a.pop_back();
    cout<<"size "<<a.size()<<endl;
    cout<<"capacity "<<a.capacity()<<endl;
    
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    //FIRST element
    cout<<"First element"<<a.front()<<endl;
    //LAST element
    cout<<"Last element"<<a.back()<<endl;
    return 0;
}