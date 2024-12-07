//*______________________________________________  ||  __________________________________________________
/*
                                                                                                                                                                       //|
                                                                                                                                                                       //|
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>__  ⭐⭐         __<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<



*/
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;
//*.......................... macros ................................>

#define ll long long int
#define maxi INT_MAX
#define mini INT_MIN
#define FOR(i, x, n) for (int i = x; i < (n); ++i)
#define FOR_RE(i, n) for (int i = n - 1; i >= 0; --i)
#define AUTO_IT(X) for (auto &val : X)
#define VEC(type, name, size) vector<type> name(size)
#define VEC_PAIR(T1, T2, name, size) vector<pair<T1, T2>> name(size)
#define VEC_PAIR_NO_SIZE(T1, T2, name) vector<pair<T1, T2>> name
#define COUT(x) cout << x << "\n"
#define IS_EVEN(x) ((x) % 2 == 0)
#define IS_ODD(x) ((x) % 2 != 0)

//*.......................... function declarations ................................>

void logic(); // Time complexity depends on implementation details
void logic2();
void logic3();
ll factorial(ll n); // O(n)

ll power(ll base, ll exp); // O(log exp)

vector<ll> sieve(ll max_n); // O(max_n log log max_n)

ll maxSumSubarray(const vector<ll> &arr); // O(n)

vector<ll> getFactors(ll n); // O(sqrt(n))

ll gcd(ll a, ll b); // O(log(min(a, b)))

ll lcm(ll a, ll b); // O(log(min(a, b)))

ll reverseNumber(ll num); //  O(n)

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

  | decToBin : TC-logn ,SC-logn |
  | binpow : TC-logn ,SC-O(1) |
  | fastfib : TC-logn ,SC-O(1) |
  | nCr : TC-o(r) ,SC-O(1) |
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
        logic3();
    }
    return 0;
}

// logic-1 my logic       ::   Failed -> inplementation problem
void logic()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);

    AUTO_IT(v)
    {
        cin >> val;
    }

    if (k <= n)
    {
        COUT(k);
        return;
    }

    sort(v.begin(), v.end());

    ll result = k;
    ll cntl = 0;

    ll a = n, b = k;
    while (a < b)
    {
        ll z = a;
        auto a = v.size() - (upper_bound(v.begin(), v.end(), b / z) - v.begin());
        result += lower_bound(v.begin(), v.end(), b / a) - v.begin() - 1;

        b = b % a;
    }
    cout << a << "," << b << " ";

    COUT(result);
}

// logic 3   : : this is the best solution for this question

void logic3()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);

    AUTO_IT(v)
    {
        cin >> val;
    }

    if (k <= n)
    {
        COUT(k);
        return;
    }

    sort(v.begin(), v.end());

    ll result = k;
    ll sum = 0;
    ll subtract = 0;
    FOR(i, 0, n)
    {
        v[i] -= subtract;
        sum += ((n - i) * v[i]);

        sum = min(k, sum);

        if (sum == k)
        {
            break;
        }
        else
        {
            result++;
        }
        subtract += v[i];
    }

    COUT(result);
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
// 6..........................function to find GCD...........................................
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

// 7..........................function to find LCM...........................................
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b; // LCM formula
}

// 8..........................function to find Reverse...........................................
ll reverseNumber(ll num)
{
    ll reversed = 0;
    while (num > 0)
    {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
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

// failure:  failure! :: i know the logic but the implementation problem  ....

// Concept of efficient sol. : just use slightly different logic to make the implementation easy   ......

// concpt used by me : logic is short and simple but the implementation is the complex;

// suggestion : try to do simple logic as well as simple implementation

// Something New : NO!