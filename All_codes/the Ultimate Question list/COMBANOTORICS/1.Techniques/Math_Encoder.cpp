//*______________________________________________  ||  __________________________________________________
/*
                                             >  V I R U P A K S H  <                                                                                                                                                                   //|
                                                                                                                                                                       //|
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>__           __<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<



*/
#include <bits/stdc++.h>
using namespace std;

//*.......................... macros ................................>

#define ll long long int
#define FOR(i, x, n) for (int i = x; i < (n); ++i)
#define FOR_RE(i, n) for (int i = n - 1; i >= 0; --i)
#define AUTO_IT(X) for (auto &val : X)
#define COUT(x) cout << x << "\n"
#define IS_EVEN(x) ((x) % 2 == 0)
#define IS_ODD(x) ((x) % 2 != 0)
#define MOD 1000000007

//*.......................... function declarations ................................>

void logic(); // Time complexity depends on implementation details
void logic2();
void logic3();

//*..................................................................................>
/*

                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
 //* _________________some imp useful functions _______________



  || decToBin : TC-logn | SC-logn ||
  || binpow : TC-logn | SC-O(1) ||
  || fastfib : TC-logn | SC-O(1) ||
  || nCr : TC-o(r) | SC-O(1) ||
  || modExp : TC-o(logb) | SC-O(1) || b->power
  || modinv : TC-o(logm) | where mis the mod value.
  || mygcd : TC-o(log(max(a,b)) |     ||
  || mylcm : you can fynd by the use of the mygcd

 ......NUM_THEORY.....
  ||sieveFunction : TC-o(nlognlogn) || simple funtion of the sieve ||
  || pollardRhoFunc : TC- (n)^1/4  | for  findint he factos   ||
  || eulerTotientSieve : TC- nlognlogn |  counts the integers from 1 to n that are coprime with n ||
  || eulerTotientfact : TC- rootn | counts the integers from 1 to n that are coprime with n by factorization method ||
  || decimalToBinary : TC - logn |  convert to binary ||
  ||divisorCount1 : TC-logn   || to know the count of divisors ,int includes itself and 1 as well
  ||divisorCount2 : TC-root(n)   || to know the count of divisors by trial division method
  ||divisorSum_1: TC-o(root(n).logn ||to know the count of divisors ,int includes itself and 1 as well
  ||divisorSum_1 : TC - o(logn) ||  to know the sum of divisors ,int includes itself and 1 as well

 ...... COMBANOTORICS................
|| PreXorSum : TC - o(n )|  pre xor  sum arrey ||

*/
//!________________________________ The search for meaning often leads to ! _______________________________
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
int main()
{
    ios::sync_with_stdio(false); // Disable synchronization
    cin.tie(nullptr);            // Untie cin from cout

    int t;
    cin >> t;
    while (t--)
    {
        cout << "Case #" << t + 1 << ": ";
        logic();
    }
    return 0;
}

void logic()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    AUTO_IT(v)
    {
        cin >> val;
    }

    ll sum1 = 0, sum2 = 0;

    FOR(i, 0, n)
    {
        sum1 = (sum1 + ((mod_exp(2, (n - (i + 1)), MOD) - 1) % MOD * v[i] % MOD) % MOD) % MOD;
    }
    // cout << sum1 << " ";

    FOR(i, 0, n)
    {
        sum2 = (sum2 + ((mod_exp(2, i, MOD) - 1) % MOD * v[i] % MOD) % MOD) % MOD;
    }
    // cout << sum2 << " ";

    COUT(sum2 - sum1);
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