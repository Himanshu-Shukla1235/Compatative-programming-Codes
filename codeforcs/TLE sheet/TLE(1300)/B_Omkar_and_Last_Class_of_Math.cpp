//*______________________________________________ B_Omkar_and_Last_Class_of_Math || 1300 __________________________________________________
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

vector<ll> sieve(ll max_n);
ll maxSumSubarray(const vector<ll> &arr);
vector<ll> getFactors(ll n);
ll power(ll base, ll exp);
ll gcd(ll a, ll b);
ll lcm(ll a, ll b);

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
    ll n, lcm1 = maxi, a=-1, b=-1;
    cin >> n;
    vector<ll> v;
    v = getFactors(n);
    // AUTO_IT(v)
    // {
    //     cout << val << " ";
    // }
    for(ll i = 0; i < v.size(); i++)
    {
        for (ll j = 1; j < v.size(); j++)
        {

            if ((v[i] * ((v[j]))) == n)
            {

                if (lcm(v[i], v[i] * (v[j] - 1)) < lcm1)
                {
                    lcm1 = lcm(v[i], v[i] * (v[j] - 1));
                    a = v[i];
                    b = v[i] * (v[j] - 1);
                }
            }
        }
    }

    COUT(a << " " << b);
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
// 3..........................function to get factors.......................................
vector<ll> getFactors(ll n)
{
    vector<ll> factors;
    for (ll i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            factors.push_back(i);
            if (i != n / i)
            { // To avoid adding the square root twice
                factors.push_back(n / i);
            }
        }
    }
    sort(factors.begin(), factors.end()); // Optional: sort factors for ordered output
    return factors;
}
//        4..........................Sieve of Eratosthenes function.......................................
vector<ll> sieve(ll max_n)
{
    vector<bool> is_prime(max_n + 1, true);
    vector<ll> primes;
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i <= max_n; ++i)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
            for (ll j = i * i; j <= max_n; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
    return primes;
}
//          5..........................Max Sum Subarray (Kadane's Algorithm).......................................
ll maxSumSubarray(const vector<ll> &arr)
{
    ll max_sum = arr[0];
    ll current_sum = arr[0];
    for (size_t i = 1; i < arr.size(); ++i)
    {
        current_sum = max(arr[i], current_sum + arr[i]);
        max_sum = max(max_sum, current_sum);
    }
    return max_sum;
}

//                6..........................function to find GCD...........................................
ll gcd(ll a, ll b)
{
    while (b != 0)
    {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

//                  7..........................function to find LCM...........................................
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b; // LCM formula
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

// failure: no failure!  ....

// Concept : just practice mathematics questions  ......

// suggestion : speed up ............

// Something New : NO!