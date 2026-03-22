#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int i=0;
    int end=s.length()-1;
    bool found=true;
    while(i<end){
        if(s[i]!=s[end]){
           found=false;
        }
        i++;
        end--;  
    }
    if(found){
      cout<<true;
    }
    else{
      cout<<false;
    }
}


