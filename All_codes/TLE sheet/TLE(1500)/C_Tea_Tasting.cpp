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
#define MOD 10000000007

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

    vector<ll> a(n);
    vector<ll> b(n);
    vector<ll> presum(n);
    vector<ll> re(n, 0);

    AUTO_IT(a)
    {
        cin >> val;
    }
    AUTO_IT(b)
    {
        cin >> val;
    }
    if (n == 1)
    {
        COUT(min(a[0], b[0]));
        return;
    }

    presum[0] = b[0];
    vector<ll> cnt(n, 0);
    FOR(i, 1, n)
    {
        presum[i] = presum[i - 1] + b[i];
    }
    // cout << "working..." << endl; // debug

    FOR(i, 0, n)
    {
        if (a[i] < b[i])
        {
            re[i] += a[i];

            continue;
        }

        ll l = i, r = n - 1;
        ll ind = -1;
        ll s = 0;
        if (i != 0)
        {
            s = presum[i - 1];
        }

        while (l <= r)
        {
            ll mid = l + ((r - l) / 2);
            ll sum = presum[mid] - s;
            if (sum > a[i])
            {
                ind = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (ind == -1)
        {
            cnt[n - 1]++;
        }
        else
        {
            cnt[ind - 1]++;
            re[ind] += min(a[i] - (presum[ind - 1] - s), b[ind]);
        }
        // cout << ind <<a[i] - (presum[ind - 1] - s)<< " ";
    }

    // AUTO_IT(cnt)
    // {
    //     cout << val << " ";
    // }
    ll tcnt = 0;
    FOR_RE(i, n)
    {
        tcnt = max(tcnt, cnt[i] + tcnt);

        re[i] += (tcnt * b[i]);
        if (a[i] >= b[i])
        {
            tcnt--;
        }
    }
    AUTO_IT(re)
    {
        cout << val << " ";
    }

    COUT(" ");
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