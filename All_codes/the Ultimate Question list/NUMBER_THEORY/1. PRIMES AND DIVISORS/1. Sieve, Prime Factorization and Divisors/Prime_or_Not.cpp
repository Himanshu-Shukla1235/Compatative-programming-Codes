#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define COUT(x) cout << x << "\n"

// Modular multiplication (to prevent overflow)
ll mulmod(ll a, ll b, ll mod) {
    ll result = 0;
    a %= mod;
    while (b > 0) {
        if (b % 2 == 1) {
            result = (result + a) % mod;
        }
        a = (a * 2) % mod;
        b /= 2;
    }
    return result;
}

// Modular exponentiation: (base^exp) % mod
ll power(ll base, ll exp, ll mod) {
    ll result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = mulmod(result, base, mod);
        base = mulmod(base, base, mod);
        exp /= 2;
    }
    return result;
}

// Miller-Rabin primality test
bool millerTest(ll n, ll d, ll a) {
    ll x = power(a, d, n);
    if (x == 1 || x == n - 1)
        return true;

    while (d != n - 1) {
        x = mulmod(x, x, n);
        d *= 2;
        if (x == 1) return false;
        if (x == n - 1) return true;
    }
    return false;
}

// Deterministic Miller-Rabin for 64-bit numbers
bool isPrime(ll n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0) return false;

    ll d = n - 1;
    while (d % 2 == 0) d /= 2;

    // Fixed witnesses for 64-bit numbers
    vector<ll> witnesses = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
    for (ll a : witnesses) {
        if (a > n - 2) break;
        if (!millerTest(n, d, a)) return false;
    }
    return true;
}

void solve() {
    ll n;
    cin >> n;
    if (isPrime(n))
        COUT("YES");
    else
        COUT("NO");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
