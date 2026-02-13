#include<iostream>
using namespace std;
//Conversion of Fahrenheit to Celsius
int main(){
   int MAX_value,MIN_value,step;
   cin>>MIN_value>>MAX_value>>step;
   for(int i=MIN_value;i<=MAX_value;i+=step){
    int c=(5*(i-32))/9;
    cout<<i<<" "<<c<<endl;
   }
return 0;
}