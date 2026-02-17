#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,lastDigit,rev=0;
    cin>>n;
    while(n>0){
         lastDigit=n%10;
         rev=rev*10+lastDigit;
         n=n/10;
    }
    vector<int> num;
    num.push_back(rev);

    for(int i=0;i<num.size();i++){
        cout<<num[i];
    }
}
