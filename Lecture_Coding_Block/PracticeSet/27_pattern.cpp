#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    // Upper part (including middle)
    for(int i = n; i >= 1; i -= 2) {
        
        // Left spaces
        for(int s = 1; s <= (n - i) / 2; s++) {
            cout << " ";
        }

        // Print 1 and 0 alternately
        for(int j = 1; j <= i; j++) {
            if(j % 2 == 1)
                cout << "1";
            else
                cout << "0";
        }

        cout << endl;
    }

    // Lower part
    for(int i = 3; i <= n; i += 2) {
        
        // Left spaces
        for(int s = 1; s <= (n - i) / 2; s++) {
            cout << " ";
        }

        // Print 1 and 0 alternately
        for(int j = 1; j <= i; j++) {
            if(j % 2 == 1)
                cout << "1";
            else
                cout << "0";
        }

        cout << endl;
    }

    return 0;
}
