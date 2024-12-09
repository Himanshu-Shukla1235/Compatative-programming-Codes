#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using ll = long long;

// Function to compute all primes up to sqrt(n) using the Sieve of Eratosthenes
vector<ll> generatePrimes(ll limit) {
    vector<bool> isPrime(limit + 1, true);
    vector<ll> primes;

    for (ll i = 2; i <= limit; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (ll j = i * i; j <= limit; j += i) {
                isPrime[j] = false;
            }
        }
    }

    return primes;
}

// Function to perform the segmented sieve and print primes up to n
void segmentedSieve(ll n) {
    ll limit = sqrt(n);
    vector<ll> primes = generatePrimes(limit);

    // Segment size (adjust for memory efficiency)
    ll segmentSize = 1e6;

    vector<bool> isPrime(segmentSize, true);

    for (ll low = 2; low <= n; low += segmentSize) {
        ll high = min(low + segmentSize - 1, n);

        // Reset the isPrime array for the current segment
        fill(isPrime.begin(), isPrime.end(), true);

        // Mark non-prime numbers in the current segment
        for (ll prime : primes) {
            // Find the first multiple of 'prime' within the segment [low, high]
            ll start = max(prime * prime, (low + prime - 1) / prime * prime);

            for (ll j = start; j <= high; j += prime) {
                isPrime[j - low] = false;
            }
        }

        // Print the primes in the current segment
        for (ll i = low; i <= high; i++) {
            if (isPrime[i - low]) {
                cout << i << "\n";
            }
        }
    }
}

int main() {
    ll n;
    cout << "Enter the upper limit (up to 1e12): ";
    cin >> n;

    segmentedSieve(n);

    return 0;
}
