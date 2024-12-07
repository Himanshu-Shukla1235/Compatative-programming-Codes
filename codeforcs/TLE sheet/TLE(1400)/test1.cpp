#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i, n) for (ll i = 0; i < n; i++)

void logic() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    set<ll> s;
    map<ll, ll> mp;

    // Input the vector values
    for (ll &val : v) {
        cin >> val;
    }

    // Process each element of the vector
    FOR(i, n) {
        ll temp = v[i];
        FOR(j, 10) {  // Use different index 'j' to avoid conflict
            mp[temp + (temp % 10)]++;  // Increment the count in the map
            temp = temp + (temp % 10); // Update the value of temp
        }
    }

    // Iterate over the map and print the key-value pairs
    for (const auto& [key, value] : mp) {
        cout << "Key: " << key << ", Value: " << value << endl;
    }
}

int main() {
    logic();
    return 0;
}
