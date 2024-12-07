//*------------------------------------------------ C. Scoring Subsequences || 1300 ----------------------------
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
#define COUT(x) cout << x << "\n"
#define IS_EVEN(x) ((x) % 2 == 0)
#define IS_ODD(x) ((x) % 2 != 0)

//.......................... function declarations ................................>
void logic();
ll factorial(ll n);
ll power(ll base, ll exp);

//..................................................................................>

//!...............................The search for meaning often leads to ! ............................
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
    ll n, result = 1;
    cin >> n;

    VEC(int, v, n);

    AUTO_IT(v)
    {

        cin >> val;
    }

    int left = 0;
    FOR(i, n)
    {
        if (v[i] == 1)
        {
            cout << 1 << " ";
            left--;
        }
        else
        {
            if (v[i] >= i + left + 1)
            {
                cout << i + left + 1 << " ";
            }
            else
            {

                cout << v[i] << " ";
            }
        }
    }
    COUT("");
}

//!................................... REALIZATION : inherently meaningless!  ............................

//*............................... function codes ..........................................>

// 1._____________factorial function_____________________

ll factorial(ll n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

// 2._____________power function_____________________
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

//..........................................................................................>

//*------ Insights--------

// failure: no failure!  ....

// Concept : just practice mathematics questions  ......

// suggestion : speed up ............

// Something New : NO!