#include<iostream>
#include<string>
using namespace std;

int main(){
    string S;
    cin>>S;
    int c_a=0,c_b=0,c_c=0,c_d=0,c_s=0;
    for(int i=0;i<S.length();i++){
        if(S[i] =='a'){
            c_a++;
        }
        else if(S[i]=='b'){
            c_b++;
        }
        else if(S[i]=='c'){
            c_c++;
        }
        else if(S[i]=='d'){
            c_d++;
        }
        else if(S[i]=='s'){
            c_s++;
        }
    }
    cout<<'a'<<c_a<<'b'<<c_b<<'c'<<c_c<<'d'<<c_d<<'s'<<c_s;
}