#include <iostream>

using namespace std;

int main() {

    long long n; 
    if (!(cin >> n) || n <= 0) return 0;

    cout << n;

    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        cout << " " << n;
    }
    cout << "\n";

    return 0;
}