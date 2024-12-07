//*______________________________________________ F_Yet_Another_Problem_About_Pairs_Satisfying_an_Inequality || 1300 __________________________________________________
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
    ll n;
    cin >> n;

    VEC_PAIR_NO_SIZE(ll, ll, v); // Create an empty vector of pairs

    FOR(i, n)
    {
        ll x;
        cin >> x;
        if (x < i + 1)
        {
            v.push_back(make_pair(x, i + 1));
        }
    }
    //    FOR(i,v.size()){
    //     cout<<v[i].first<<"->"<<v[i].second<<"  ";
    //    }

    // Sort pairs in ascending order
    sort(v.begin(), v.end());

    ll result = 0;
    FOR(i, v.size())
    {
        ll key = v[i].first;
        ll index = v[i].second;
        auto it = upper_bound(v.begin(), v.end(), make_pair(index, LLONG_MAX));
        ll dist = distance(it, v.end());

        // result = max(dist - 1, 0LL);
        // cout<<result<<" ";
        if (it != v.end())
        {
            //    cout << key << "->" << dist << "  ";
            result = result + dist;
        }
    }
    // O ptional: Add any logic to use the 'result' variable if needed

    COUT(result); // Print a newline
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