//*______________________________________________  ||  __________________________________________________
//|
//|
#include <bits/stdc++.h>
using namespace std;

//.......................... macros ................................>
#define ll long long int
#define maxi INT_MAX
#define mini INT_MIN
#define FOR(i, n) for (int i = 0; i < (n); ++i)
#define FOR_RE(i, n) for (int i = N - 1; i >= 0; --i)
#define AUTO_IT(X) for (auto &val : X)
#define VEC(type, name, size) vector<type> name(size)
#define VEC_PAIR(T1, T2, name, size) vector<pair<T1, T2>> name(size)
#define VEC_PAIR_NO_SIZE(T1, T2, name) vector<pair<T1, T2>> name
#define COUT(x) cout << x << "\n"
#define IS_EVEN(x) ((x) % 2 == 0)
#define IS_ODD(x) ((x) % 2 != 0)

//.......................... function declarations ................................>
void logic();
ll factorial(ll n);
ll power(ll base, ll exp);

//..................................................................................>
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
//!________________________________ The search for meaning often leads to ! _______________________________

int main()
{
    ios::sync_with_stdio(false); // Disable synchronization
    cin.tie(nullptr);            // Untie cin from cout

    int t;
    cin >> t;
    while (t--)
    {
        logic();
    }
    return 0;
}

void logic()
{
    ll n, q, result = 0;

    cin >> n >> q;

    string s, k;
    cin >> s;
    cin >> k;

    vector<pair<ll, ll>> queries(q);
    vector<ll> v1(n);

    // Read the queries
    AUTO_IT(queries)
    {
        cin >> val.first >> val.second;
        // Convert to zero-based indexing
        val.first--;
        val.second--;
    }

    // Sort the strings
    sort(s.begin(), s.end());
    sort(k.begin(), k.end());

    // Calculate differing positions
    for (int i = 0; i < n; i++)
    {
        if (s[i] != k[i])
        {
            result++;
        }
        v1[i] = result;
    }

    // Process each query
    for (const auto& query : queries)
    {
        int re = v1[query.second] - (query.first > 0 ? v1[query.first - 1] : 0);
        cout << re << "\n";
    }
}

//!________________________________ REALIZATION : inherently meaningless!  ______________________________________________
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
//*________________________________ function codes ___________________________________________ >

// 1.....................factorial function............................

ll factorial(ll n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

// 2..........................power function.......................................
ll power(ll base, ll exp)
{
    if (exp == 0)
        return 1;
    if (exp % 2 == 0)
    {
        ll half = power(base, exp / 2);
        return half * half;
    }
    else
    {
        return base * power(base, exp - 1);
    }
}
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
//*____________________________ Insights____________________________________________________________

// failure: no failure!  ....

// Concept : just practice mathematics questions  ......

// suggestion : speed up ............

// Something New : NO!