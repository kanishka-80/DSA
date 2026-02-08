#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;   
    int m = (n + 1) / 2;
    // Upper part
    for(int i = 1; i <= m; i++) {

        // Left spaces
        for(int s = 1; s <= n - i; s++) {
            cout << "  ";
        }

        int num;
        if(i == 1 || i == 2)
            num = 1;
        else
            num = i - 1;

        // Left number
        cout << num;

        // Middle spaces
        if(i != 1) {
            for(int s = 1; s <= 2*i - 3; s++) {
                cout << "  ";
            }
            cout << num;
        }

        cout << endl;
    }

    // Lower part
    for(int i = m - 1; i >= 1; i--) {

        // Left spaces
        for(int s = 1; s <= n - i; s++) {
            cout << "  ";
        }

        int num;
        if(i == 1 || i == 2)
            num = 1;
        else
            num = i - 1;

        // Left number
        cout << num;

        // Middle spaces
        if(i != 1) {
            for(int s = 1; s <= 2*i - 3; s++) {
                cout << "  ";
            }
            cout << num;
        }

        cout << endl;
    }

    return 0;
}
