//*______________________________________________ C_Deep_Down_Below || 1300 __________________________________________________
/*
                                                                                                                                                                       //|
                                                                                                                                                                       //|
*/
#include <bits/stdc++.h>
using namespace std;

//.......................... macros ................................>
#define ll long long int
#define maxi INT_MAX
#define mini INT_MIN
#define FOR(i, n) for (int i = 0; i < (n); ++i)
#define FOR_RE(i, n) for (int i = n - 1; i >= 0; --i)
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
*/
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
    ll n;
    cin >> n;
    VEC(vector<ll>, v, n);
    vector<pair<ll, pair<ll, ll>>> v2(n);

    FOR(i, n)
    {
        ll k;
        cin >> k;
        ll maxm = LLONG_MIN, index = -1; // Initialize index
        FOR(j, k)
        {
            ll x;
            cin >> x;
            v[i].push_back(x - j); // Corrected assignment
            if (x - j > maxm)
            {
                maxm = x - j;
                index = j; // Update index of the maximum value
            }
        }

        // Store the maximum value, index (1-based), and length k
        v2[i] = make_pair(maxm, make_pair(index , k));
    }
    sort(v2.begin(), v2.end());
    // // // Output the contents of v2
    // cout << "Contents of v2:" << endl;
    // FOR(i, n)
    // {
    //     cout << "Max value: " << v2[i].first
    //          << ", Index (1-based): " << v2[i].second.first
    //          << ", Length: " << v2[i].second.second << endl;
    // }

    ll power_n = 0, current_power = 0;

    FOR(i, n)
    {
        if (current_power < v2[i].first + 1)
        {
            power_n = power_n+ v2[i].first+1 - current_power;
            current_power = power_n + v2[i].second.second;
            cout << current_power << "|" << power_n << " k ";
        }
        else
        {
            current_power += v2[i].second.second;

            cout << current_power << "|" << power_n << " x ";
        }
        cout << "  " << " ";
    }

    COUT(power_n);
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
//*____________________________ Insights____________________________________________________________

// failure: yes  | i used the diffrent approch than standered but dont know hwy wrong  ....

// Concept : just use the binay search  ......

// suggestion : if you are having range than mostly binary search used ............

// Something New : NO!