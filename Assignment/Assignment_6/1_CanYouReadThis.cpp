#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    string word="";

    for(int i=0;i<s.length();i++){
        if(isupper(s[i] && word!="")){
            cout<<word<<endl;
            word=s[i];
        }
        else{
            word+=s[i];
        }
    }
    if(word != ""){
        cout<<word<<endl;
    }
    return 0;

}