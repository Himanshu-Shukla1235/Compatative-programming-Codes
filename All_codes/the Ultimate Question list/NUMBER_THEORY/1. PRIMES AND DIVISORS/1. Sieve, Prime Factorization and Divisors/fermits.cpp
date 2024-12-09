#include <iostream>
#include <cstdlib>  // For rand()
#include <ctime>    // For seeding random number generator
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

// Fermat's primality test
bool isPrimeFermat(ll n, int k) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;

    srand(time(0));  // Seed random number generator

    for (int i = 0; i < k; i++) {
        ll a = 2 + rand() % (n - 3);  // Random number in [2, n-2]
        if (powerMod(a, n - 1, n) != 1) {
            return false;  // Definitely composite
        }
    }
    return true;  // Probably prime
}

int main() {
    ll n;
    int k = 5;  // Number of iterations
    cout << "Enter a number to test for primality: ";
    cin >> n;

    if (isPrimeFermat(n, k)) {
        cout << n << " is probably prime." << endl;
    } else {
        cout << n << " is composite." << endl;
    }
    return 0;
}
