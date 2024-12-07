//*______________________________________________  ||  __________________________________________________
/*
                                             >  V I R U P A K S H  <                                                                                                                                                                   //|
                                                                                                                                                                       //|
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>__ ⭐⭐          __<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<



*/
#include <bits/stdc++.h>
using namespace std;

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
// bool chec(ll x, ll k, ll n, vector<ll> &nums)
// {
//     ll operations = 0;

//     for (int i = n / 2; i < n; i++)
//     {
//         if (x - nums[i] >= 0)
//         {
//             operations += (x - nums[i]);
//         }
//         if (operations > k)
//             return false;
//     }

//     return operations <= k;
// }
bool chk(ll mid, ll n, vector<ll> &v, ll k)
{

    FOR(i, n / 2, n)
    {

        if (mid - v[i] >= 0)
        {
            k = k - (mid - v[i]);
        }
        else
        {
            break;
        }
        if (k < 0)
        {
            return false;
        }
    }

    return true;
}
int main()
{
    ios::sync_with_stdio(false); // Disable synchronization
    cin.tie(nullptr);            // Untie cin from cout

    int t = 1;

    while (t--)
    {
        logic2();
    }
    return 0;
}
//  logic.1 -correct ,  in this I used just greedy method but this van also be done by the binary
void logic()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);

    AUTO_IT(v)
    {
        cin >> val;
    }

    sort(v.begin(), v.end());
    if (n == 1)
    {
        COUT(v[0] + k);
        return;
    }

    ll midel = v[n / 2], res = -1;
    ll cnt = 1;
    FOR(i, n / 2, n - 1)
    {
        ll diff = abs(v[i] - v[i + 1]);
        if (cnt * diff <= k)
        {
            midel += diff;
            k -= (cnt * diff);
            cnt++;
        }
        else
        {
            break;
        }
    }

    res = midel + (k / cnt);
    COUT(res);
}

// logic.2,binay approach

void logic2()
{

    ll n, k, ans = -1;
    cin >> n >> k;
    vector<ll> v(n);

    AUTO_IT(v)
    {
        cin >> val;
    }

    sort(v.begin(), v.end());
    ll l = 0, r = 1e18;

    while (l <= r)
    {
        ll mid = l + ((r - l) / 2);

        // bool check = chec(mid, k, n, v);
        bool check = chk(mid, n, v, k);

        if (check)
        {
            ans = mid;
            l = mid + 1;
        }

        else
        {
            r = mid - 1;
        }
    }
    COUT(ans);
}

// both logics are good so you can take any one of them . 
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

// failure: no failure!  ....

// Concept of efficient sol. : binary  ......

// concpt used by me : greedy

// suggestion : when using binary please chek the boundry cases 

// Something New : NO!