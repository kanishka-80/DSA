#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int a = 0, b = 1, c;

    for(int i = 1; i <= N; i++) {        // rows
        for(int j = 1; j <= i; j++) {    // columns
            cout << a << " ";
            c = a + b;
            a = b;
            b = c;
        }
        cout << endl;
    }
    return 0;
}
