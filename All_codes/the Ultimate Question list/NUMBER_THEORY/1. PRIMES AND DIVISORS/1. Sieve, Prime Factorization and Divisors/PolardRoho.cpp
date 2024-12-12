#include <iostream>
#include <vector>
#include <cstdlib>   // For rand()
#include <ctime>     // For seeding random number generator
#include <cmath>     // For sqrt()
#include <algorithm> // For sorting

using namespace std;
using ll = long long;

// Function to perform modular exponentiation: (base^exp) % mod
ll powerMod(ll base, ll exp, ll mod) {
    ll result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

// Function to compute the greatest common divisor (GCD) of two numbers
ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

// Miller-Rabin primality test to check if a number is prime
bool isPrime(ll n, int iterations = 5) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0) return false;

    // Write n-1 as d * 2^r
    ll d = n - 1;
    int r = 0;
    while (d % 2 == 0) {
        d /= 2;
        r++;
    }

    srand(time(0));
    for (int i = 0; i < iterations; i++) {
        ll a = 2 + rand() % (n - 4); // Random number in [2, n-2]
        ll x = powerMod(a, d, n);
        if (x == 1 || x == n - 1) continue;

        bool composite = true;
        for (int j = 0; j < r - 1; j++) {
            x = (x * x) % n;
            if (x == n - 1) {
                composite = false;
                break;
            }
        }
        if (composite) return false;
    }
    return true;
}

// Function to perform Pollard's Rho algorithm to find a non-trivial factor of n
ll pollardRho(ll n) {
    if (n % 2 == 0) return 2; // Handle even numbers

    srand(time(0)); // Seed random number generator
    ll x = 2 + rand() % (n - 2);
    ll y = x;
    ll c = 1 + rand() % (n - 1);
    ll d = 1;

    // Function f(x) = (x*x + c) % n
    auto f = [&](ll x) {
        return (powerMod(x, 2, n) + c + n) % n;
    };

    while (d == 1) {
        x = f(x);
        y = f(f(y));
        d = gcd(abs(x - y), n);

        // If d == n, retry with different random values
        if (d == n) return pollardRho(n);
    }
    return d;
}

// Recursive function to find all prime factors of n
void factorize(ll n, vector<ll>& factors) {
    if (n <= 1) return;
    if (isPrime(n)) {
        factors.push_back(n);
        return;
    }

    ll factor = pollardRho(n);
    factorize(factor, factors);
    factorize(n / factor, factors);
}

int main() {
    ll n;
    cout << "Enter a number to factorize: ";
    cin >> n;

    vector<ll> factors;
    factorize(n, factors);

    // Sort and display the factors
    sort(factors.begin(), factors.end());
    cout << "Prime factors: ";
    for (ll factor : factors) {
        cout << factor << " ";
    }
    cout << endl;

    return 0;
}
