#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 0;

    for (int i = 0; i < s.length()-1; i++) {
        if (i < s.length() - 1 && s[i] == s[i + 1]) {
            count++;
        } 
        else {
            cout << s[i] << count;
            count = 1;
        }
    }

    return 0;
}