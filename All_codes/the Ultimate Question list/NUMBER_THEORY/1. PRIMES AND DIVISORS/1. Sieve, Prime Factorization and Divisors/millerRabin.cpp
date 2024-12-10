//*______________________________________________  Non-deterministic Miller-Robin Algorithm   __________________________________________________

#include <iostream>
#include <cstdlib>    // For rand()
#include <ctime>      // For seeding rand()
#include <cmath>

using namespace std;

// Utility function to perform modular exponentiation: (base^exp) % mod
long long power(long long base, long long exp, long long mod) {
    long long result = 1;
    base = base % mod;
    while (exp > 0) {
        if (exp % 2 == 1)  // If exp is odd
            result = (result * base) % mod;
        exp = exp >> 1;    // Divide exp by 2
        base = (base * base) % mod;
    }
    return result;
}

// Miller-Rabin primality test for a single witness
bool millerTest(long long d, long long n) {
    // Pick a random number in [2, n-2]
    long long a = 2 + rand() % (n - 4);

    // Compute a^d % n
    long long x = power(a, d, n);

    if (x == 1 || x == n - 1)
        return true;

    // Keep squaring x while one of the following is true:
    // 1. d does not reach n-1
    // 2. x does not become n-1
    while (d != n - 1) {
        x = (x * x) % n;
        d *= 2;

        if (x == 1)        // Definitely composite
            return false;
        if (x == n - 1)    // Passes this round
            return true;
    }

    return false;          // Definitely composite
}

// Miller-Rabin primality test main function
bool isPrime(long long n, int k = 5) {  // k is the number of iterations
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0)
        return false;

    // Write n-1 as 2^s * d (with d odd)
    long long d = n - 1;
    while (d % 2 == 0)
        d /= 2;

    // Perform k rounds of Miller-Rabin tests
    for (int i = 0; i < k; i++) {
        if (!millerTest(d, n))
            return false;  // Composite
    }

    return true;  // Probably prime
}

// Main function to test the code
int main() {
    srand(time(0));  // Seed the random number generator

    long long num;
    cout << "Enter a number to test for primality: ";
    cin >> num;

    if (isPrime(num))
        cout << num << " is probably prime." << endl;
    else
        cout << num << " is composite." << endl;

    return 0;
}
