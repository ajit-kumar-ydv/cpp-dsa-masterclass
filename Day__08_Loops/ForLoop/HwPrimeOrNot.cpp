#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a number greater than 1: ";
    cin >> n;

    // Edge case handling: numbers less than or equal to 1 are not prime
    if (n <= 1) {
        cout << "NOT PRIME" << endl;
        return 0;
    }

    bool isPrime = true;

    // Optimized loop: only check up to the square root of n
    for (int i = 2; i * i <= n; i++) {
        // If n is divisible by i, it's not a prime number
        if (n % i == 0) {
            isPrime = false;
            break; 
        }
    }

    // Print the final result after checking all possible divisors
    if (isPrime) {
        cout << "PRIME" << endl;
    } else {
        cout << "NOT PRIME" << endl;
    }

    return 0;
}