#include<iostream>
#include<vector>
#include<algorithm>
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
    cout<<endl;
    // to delete
    a.pop_back();
    cout<<"size "<<a.size()<<endl;
    cout<<"capacity "<<a.capacity()<<endl;
    
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //FIRST element
    cout<<"First element"<<a.front()<<endl;
    //LAST element
    cout<<"Last element"<<a.back()<<endl;

    // to insert at from starting specific position
    a.insert(a.begin()+2,10);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    // to inser at from ending specific position
    a.insert(a.end()-1,10);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //to reverse the vector
    reverse(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    // to sort the vector
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}