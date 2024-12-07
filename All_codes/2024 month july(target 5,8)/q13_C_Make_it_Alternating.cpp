//------------------------------------------------- C_Make_it_Alternating|| 1000 ---------------------------------------

#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;
#define ll long long int

// Modular multiplication
ll modMul(ll a, ll b, ll mod) {
    return (a * b) % mod;
}

// Modular factorial function
ll factorial(int n) {
    ll result = 1;
    for (int i = 2; i <= n; i++) {
        result = modMul(result, i, MOD);
    }
    return result;
}

void logic() {
    string s;
    cin >> s;

    vector<ll> v; // Vector to store lengths of consecutive segments
    ll result = 1, count = 1, deletions = 0;

    // Process the string to compute segment lengths
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            count++;
        } else {
            v.push_back(count);
            count = 1; // Reset count for the new character
        }
    }
    // Don't forget to add the last segment length
    v.push_back(count);

    // Compute the result
    for (int i = 0; i < v.size(); i++) {
        result = modMul(result, v[i], MOD);
        deletions += v[i] - 1;
    }

    // Calculate factorial of deletions and update result
    result = modMul(result, factorial(deletions), MOD);

    cout << deletions << " " << result << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        logic();
    }
    return 0;
}


//*____________________________________________________________________________________________________________________________

//*------ Insights--------

// faliure: combanotorics prolem practice  is may be less still i am too close  ....

//  Concept : nothing new concept is used  just you have to be better in mathematics section or permutation and combination ......

// suggestion : speed up  ............

// Somthing New : NO!