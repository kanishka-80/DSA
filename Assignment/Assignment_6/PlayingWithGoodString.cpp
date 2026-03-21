#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 0;
    int maxLen = 0; //hume continous vowels ka count chahiye

    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
            if (count > maxLen) {
                maxLen = count;
            }
        } 
        else {
            count = 0;
        }
    }

    cout << maxLen;
    return 0;
}