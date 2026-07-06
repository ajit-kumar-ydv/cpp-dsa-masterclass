#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number greater than 1: ";
    cin >> n;

    // Edge case: 1 is neither prime nor composite, and 0 or less are invalid
    if (n <= 1) {
        cout << "NEITHER PRIME NOR COMPOSITE" << endl;
        return 0; 
    }

    bool isPrime = true;

    // OPTIMIZATION: Check only up to the square root of n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << "PRIME";
    else
        cout << "COMPOSITE";

    return 0;
}