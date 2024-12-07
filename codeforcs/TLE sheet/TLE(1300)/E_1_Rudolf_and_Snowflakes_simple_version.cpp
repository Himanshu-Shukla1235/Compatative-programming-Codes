//*______________________________________________ E_1_Rudolf_and_Snowflakes_simple_version || 1300  __________________________________________________
                                                                                                                                                                       //|
                                                                                                                                                                       //|
#include <bits/stdc++.h>
using namespace std;

//.......................... macros ................................>
#define ll long long int
#define maxi INT_MAX
#define mini INT_MIN
#define FOR(i, n) for (int i = 0; i < (n); ++i)
#define FOR_RE(i, n) for (int i = N-1; i >= 0; --i)
#define AUTO_IT(X)  for(auto &val:X)
#define VEC(type, name, size) vector<type> name(size)
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
   cin.tie(nullptr); // Untie cin from cout
 
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

    for (int i = 2; i <= sqrt(n) && n - 1 >= 6; i++) // Loop over possible bases
    {
        ll result = 0;
        int j = 1;
        //  cout << " L" << " ";
        while (result <= n - 1) // Compute sum of powers
        {
            result += power(i, j);

            if (result == n - 1)
            {
                COUT("YES");
                return;
            }
            j++;
        }
    }
    COUT("NO");
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

ll factorial(ll n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

          // 2..........................power function.......................................
ll power(ll base, ll exp) {
    if (exp == 0) return 1;
    if (exp % 2 == 0) {
        ll half = power(base, exp / 2);
        return half * half;
    } else {
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