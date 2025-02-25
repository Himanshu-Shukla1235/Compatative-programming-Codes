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
//--------------------------- level -2 : trying the raw code ----------------------------------------

// Function to count the number of divisors of a given number n using trial division
vector<ll> DivisorCount_Trial(ll n)
{
    vector<ll> div;

    // Check divisors from 1 to sqrt(n)
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            div.emplace_back(i);
            // Count the divisor i
            if (i != n / i)
            {
                div.emplace_back(n / i); // Count the corresponding divisor n/i
            }
        }
    }

    return div;
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
    ll n, m, k;

    cin >> n >> m >> k;

    vector<ll> a(n);
    vector<ll> b(m);
    map<ll, ll> mp1;
    map<ll, ll> mp2;
    ll cnt = 0;
    AUTO_IT(a)
    {
        cin >> val;
        if (val == 0)
        {
            mp1[cnt]++;
            cnt = 0;
            continue;
        }
        cnt++;
    }

    mp1[cnt]++;
    cnt = 0;

    AUTO_IT(b)
    {
        cin >> val;
        if (val == 0)
        {
            mp2[cnt]++;
            cnt = 0;
            continue;
        }
        cnt++;
    }
    mp2[cnt]++;

    //---------------------------debug------------------------
    // AUTO_IT(mp1)
    // {
    //     cout << val.first << "->" << val.second << " ";
    // }
    // AUTO_IT(mp2)
    // {
    //     cout << val.first << "->" << val.second << " ";
    // }
    //--------------------------------------------------------------------------------

    // geting the divisors of the k
    vector<ll> divs = DivisorCount_Trial(k);

    // store the segments of the row and column
    map<ll, ll> mp3;
    map<ll, ll> mp4;

    AUTO_IT(divs)
    {
        ll cnt = 0;

        for (auto &it : mp1)
        {
            if (val == 1)
            {
                mp3[val] += it.first * it.second;
                continue;
            }

            cnt = max(0LL, (it.first - (val - 1)) * it.second);
            mp3[val] += cnt;
        }
    }
    AUTO_IT(divs)
    {
        ll cnt = 0;

        for (auto &it : mp2)
        {
            if (val == 1)
            {
                mp4[val] += it.first * it.second;
                continue;
            }
            cnt = max(0LL, (it.first - (val - 1)) * it.second);
            mp4[val] += cnt;
        }
    }

    // ------------------------------------- debug -------------------------

    // AUTO_IT(mp3)
    // {
    //     cout << val.first << "->" << val.second << " ";
    // }
    // COUT(" ");
    // AUTO_IT(mp4)
    // {
    //     cout << val.first << "->" << val.second << " ";
    // }

    //-----------------------------------------

    // calulating ans
    ll re = 0;
    AUTO_IT(mp3)
    {
        ll cn = k / val.first;

        re += (val.second * (mp4[cn]));
    }
    COUT(re);
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