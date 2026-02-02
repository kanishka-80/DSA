#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int val = 1;
        
        // Calculate and print coefficients
        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                val = 1;
            else
                val = val * (i - j + 1) / j;
            
            cout << val << "   ";
        }
        cout << endl;
    }
    return 0;
}