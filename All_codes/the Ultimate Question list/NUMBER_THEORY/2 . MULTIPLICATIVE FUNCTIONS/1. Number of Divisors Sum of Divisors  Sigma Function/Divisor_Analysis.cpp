
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define MOD 1000000007

//!________________________________ The search for meaning often leads to ! _______________________________

void logic();

// Function to compute modular exponentiation (base^exp % mod)
long long mod_exp(long long base, long long exp, long long mod)
{
    long long result = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

// Function to compute modular inverse using Fermat's Little Theorem
long long mod_inverse(long long a, long long mod)
{
    return mod_exp(a, mod - 2, mod); // Fermat's Little Theorem: a^(mod-2) % mod is the inverse of a mod mod
}

// Count of divisors function (number of divisors of a number based on its prime factorization)
ll countD(vector<pair<ll, ll>> vp)
{
    ll re = 1;
    for (auto &val : vp)
    {
        re *= (val.second + 1) % MOD;
        re %= MOD; // Take modulo at each step
    }
    return re;
}

// Sum of divisors function (sum of divisors of a number based on its prime factorization)
ll sumD(vector<pair<ll, ll>> vp)
{
    ll re = 1;

    for (auto &val : vp)
    {
        ll fact = val.first;
        ll cnt = val.second;

        // Formula for sum of divisors: (1 + p + p^2 + ... + p^cnt) = (p^(cnt+1) - 1) / (p - 1)
        ll term = (mod_exp(fact, cnt + 1, MOD) - 1 + MOD) % MOD;
        ll inv = mod_inverse(fact - 1, MOD); // Inverse of (p-1)

        // Multiply the result by the current term
        re = (re * term % MOD) * inv % MOD;
    }

    return re;
}

// Product of divisors function (product of divisors of a number based on its prime factorization)
ll proD(vector<pair<ll, ll>> vp, ll re1)
{
    ll div_prod = 1;
    ll div_cnt2 = 1;

    for (auto &val : vp)
    {
        ll fact = val.first;
        ll cnt = val.second;

        // Formula for product of divisors: p^(1+2+...+cnt)
        div_prod = mod_exp(div_prod, cnt + 1, MOD) *
                   mod_exp(mod_exp(fact, (cnt * (cnt + 1) / 2), MOD), div_cnt2, MOD) % MOD;

        // Update the count modulo (MOD-1) since we use it in exponentiation
        div_cnt2 = (div_cnt2 * (cnt + 1)) % (MOD - 1);
    }

    return div_prod;
}

int main()
{
    ios::sync_with_stdio(false); // Disable synchronization
    cin.tie(nullptr);            // Untie cin from cout

    int t = 1;

    while (t--)
    {
        logic();
    }
    return 0;
}

void logic()
{
    ll n;
    cin >> n;

    vector<pair<ll, ll>> vp(n);

    for (auto &val : vp)
    {
        cin >> val.first >> val.second;
    }

    // count,sum,product

    // count...

    ll re1 = countD(vp);

    // sum

    ll re2 = sumD(vp);
    // product

    ll re3 = proD(vp, re1);

    cout << re1 << " " << re2 << " " << re3 << endl;
}

//!________________________________ REALIZATION : inherently meaningless!  ______________________________________________
/*
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
*/
//*________________________________ function codes ___________________________________________ >
//*____________________________ Insights____________________________________________________________

// failure: no failure!  ....

// Concept of efficient sol. : just practice mathematics questions   ......

// concpt used by me : jsut simple mathematics logic

// suggestion : speed up ............

// Something New : NO!