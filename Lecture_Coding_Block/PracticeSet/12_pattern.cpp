#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {

        // spaces before numbers
        for (int s = 0; s < n - i - 1; s++) {
            cout << "  ";
        }

        // left side numbers (descending to 0)
        for (int num = n-i; num <= n-1; num++) {
            cout << num << " ";
        }
         cout << endl;
    }

    return 0;
}
