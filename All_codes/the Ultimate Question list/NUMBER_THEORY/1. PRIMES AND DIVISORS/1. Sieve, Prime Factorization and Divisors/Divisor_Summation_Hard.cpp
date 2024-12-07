#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 1e9 + 7;
const int LIMIT = 1e5 + 8;

vector<int> primes;

// Function to calculate the power of a number
int power(int base, int exp) {
    int result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result *= base;
        }
        base *= base;
        exp /= 2;
    }
    return result;
}

// Function to generate primes using the Sieve of Eratosthenes
void sieve() {
    vector<bool> isPrime(LIMIT, true);
    isPrime[0] = isPrime[1] = false; // 0 and 1 are not primes

    for (int i = 2; i * i <= LIMIT; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= LIMIT; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= LIMIT; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
}

// Function to calculate the sum of divisors of a number
int sumOfDivisors(int n) {
    int original = n;
    int result = 1;

    // Iterate over all primes
    for (int prime : primes) {
        if (prime * prime > n) {
            break;
        }
        if (n % prime == 0) {
            int count = 0;
            while (n % prime == 0) {
                n /= prime;
                count++;
            }
            // Sum of powers formula: (p^(k+1) - 1) / (p - 1)
            result *= (power(prime, count + 1) - 1) / (prime - 1);
        }
    }

    // If n is still greater than 1, it is a prime factor
    if (n > 1) {
        result *= (n + 1);
    }

    // Subtract the original number from the sum of divisors
    return result - original;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve(); // Precompute primes

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cout << sumOfDivisors(n) << "\n";
    }

    return 0;
}
