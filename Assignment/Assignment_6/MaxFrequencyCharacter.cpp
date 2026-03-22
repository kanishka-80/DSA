#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;

    int freq[256]={0};
    for(int i=0;i<s.length();i++){
            freq[s[i]]++;
    }
    int maxFreq = 0;
    char ans;

    for(int i = 0; i < 256; i++){
        if(freq[i] > maxFreq){
            maxFreq = freq[i];
            ans = char(i);
        }
    }

    cout << ans << " " << maxFreq;

    return 0;
}