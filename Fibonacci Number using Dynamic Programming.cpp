#include <iostream>
using namespace std;

// Function to find the nth Fibonacci number using dynamic programming
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    // Create an array to store Fibonacci numbers up to the nth number
    int fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;

    // Fill the array using the bottom-up approach
    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    return fib[n];
}

int main() {
    int n;
    cout << "Enter the position of Fibonacci number: ";
    cin >> n;

    // Calculate the nth Fibonacci number
    int result = fibonacci(n);

    // Output the result
    cout << "The " << n << "th Fibonacci number is: " << result << endl;

    return 0;
}
