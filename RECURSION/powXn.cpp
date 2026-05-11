// pow of x,n

#include <iostream>
using namespace std;

// Recursive function using Binary Exponentiation
// Time Complexity: O(log n)
double calculatePower(double x, long long n) {
    // Base cases
    if (n == 0) return 1.0;
    if (x == 0) return 0.0;
    if (x == 1) return 1.0;

    // Handle negative power
    if (n < 0) {
        return 1.0 / calculatePower(x, -n);
    }

    // If n is even: x^n = (x*x)^(n/2)
    if (n % 2 == 0) {
        return calculatePower(x * x, n / 2);
    }
    // If n is odd: x^n = x * (x*x)^((n-1)/2)
    return x * calculatePower(x * x, (n - 1) / 2);
}

int main() {
    double x;
    long long n; // Using long long for n to handle large integer exponents
    cout << "Enter number (x): ";
    cin >> x;
    cout << "Enter power (n): ";
    cin >> n;

    cout << "Result: " << calculatePower(x, n) << endl;
    return 0;
}