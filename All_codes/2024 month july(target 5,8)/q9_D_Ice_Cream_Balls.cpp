#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int M = 1e9 + 7;

// Function to calculate C(n, r)
long long nCr(int n, int r) {
    if (r > n)
        return 0;
    if (r == 0 || r == n)
        return 1;
    if (r > n - r)
        r = n - r; // Because C(n, r) == C(n, n - r)
    long long result = 1;
    for (int i = 0; i < r; ++i) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

void logic();

//----------------------------------------- code starts from here -------------------------
int main() {
    int t;
    cin >> t;
    while (t--) {
        logic();
    }
    return 0;
}

void logic() {
    ll n;
    cin >> n;

    // Calculate the largest i such that C(i, 2) <= n
    ll i = ((sqrt(1 + 8 * n) - 1) / 2);

    // Adjust i if necessary
    while (nCr(i, 2) > n) {
        i--;
    }
   

    if (nCr(i+1, 2) == n) {
        cout << i+1 << endl;
    } else {
        cout << i+1 + n - nCr(i+1, 2) << endl;
    }
}
