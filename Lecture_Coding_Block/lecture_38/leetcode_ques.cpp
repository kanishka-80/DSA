//344 - reverse String
// 3110 - Score of string
// 1678 - Goal Parser Interpretation
// 58 - Length of last word
// 151 - Revere words in a string
// 557 - Reverse words in a string III
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
        int n = s.size();
        int start = 0;

        for(int i = 0; i <= n; i++) {
            // jab space mile ya string end ho jaye
            if(i == n || s[i] == ' ') {
                int end = i - 1;

                // reverse current word
                while(start < end) {
                    swap(s[start], s[end]);
                    start++;
                    end--;
                }

                // next word ka start
                start = i + 1;
            }
        }

      cout<<s;
    }

// 125 - Valid Palindrome
// 9 - Palindrome Number
// 389 - Find the Difference
// 242 - Valid Anagram