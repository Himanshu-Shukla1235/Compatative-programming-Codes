//*______________________________________________ E_Anna_and_the_Valentine_s_Day_Gift || 1400 __________________________________________________
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
void logic(); // Time complexity depends on implementation details

ll factorial(ll n); // O(n)

ll power(ll base, ll exp); // O(log exp)

vector<ll> sieve(ll max_n); // O(max_n log log max_n)

ll maxSumSubarray(const vector<ll> &arr); // O(n)

vector<ll> getFactors(ll n); // O(sqrt(n))

ll gcd(ll a, ll b); // O(log(min(a, b)))

ll lcm(ll a, ll b); // O(log(min(a, b)))

ll reverseNumber(ll num);
int countZeroes(ll num)
{
    int zeroCount = 0;

    while (num > 0)
    {
        if (num % 10 == 0)
        {
            zeroCount++;
            num /= 10;
        }
        else
        {
            break;
        }
    }

    return zeroCount;
}
ll countdigits(ll num)
{
    ll result = 0;
    while (num > 0)
    {
        num /= 10; // Correctly reduce num by dividing by 10
        result++;
    }
    return result;
}

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
    ll n, m;
    cin >> n >> m;

    vector<ll> v(n);
    vector<pair<ll, ll>> v1;
    string s = "";

    // Read input into vector v
    AUTO_IT(v)
    {
        cin >> val;
        v1.push_back(make_pair(countZeroes(val), val));
    }

    // Sort v1 by number of zeroes and then by value
    sort(v1.begin(), v1.end());

    // Print the contents of v1
    // cout << "Contents of v1:" << endl;
    // for (const auto &p : v1)
    // {
    //     cout << "(" << p.first << ", " << p.second << ")" << endl;
    // }

    bool checkturn = true;
    ll re = 0;
    while (!v1.empty())
    {
        if (checkturn)
        {
            // Extract significant digits from number
            ll number = v1.back().second;
            number = number / power(10, v1.back().first);
            re = re + countdigits(number);
            v1.pop_back();
            checkturn = false;
        }
        else
        {
            ll number = v1.back().second;

            re = re + countdigits(number);

            v1.pop_back();
            checkturn = true;
        }
    }
    // cout << re << " ";

    if (re <= m)
    {
        COUT("Anna");
    }
    else
    {
        COUT("Sasha");
    }
}

//!________________________________ REALIZATION : inherently meaningless!  ______________________________________________
/*
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                                                                                                                                                                       //|
                 Contents of v1:
(0, 2)
(0, 14)
Sasha
Contents of v1:
(0, 1)
(0, 9)
(0, 56)
Anna
Contents of v1:
(0, 1)
(0, 2007)
(1, 1580)
(2, 800)
Sasha
Contents of v1:
(0, 4)
(0, 123)
(1, 30)
(3, 5000)
Sasha
Contents of v1:
(0, 1)
(0, 2)
(0, 3)
(0, 4)
(0, 6)
(0, 6)
(0, 7)
(0, 9)
(1, 10)
(1, 10)
Sasha
Contents of v1:
(0, 6)
Sasha
Contents of v1:
(1, 10)
Sasha
Contents of v1:
(0, 1)
(0, 2)
(0, 2)
(0, 2)
(0, 9)
(1, 10)
(1, 10)
(1, 10)
Sasha
Contents of v1:
(1, 10)
(1, 10)
(1, 10)
(1, 10)
Sasha
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

// 8..........................function to find LCM...........................................
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

// Concept of efficient sol. : just practice mathematics questions   ......

// concpt used by me : jsut simple mathematics logic

// suggestion : speed up ............

// Something New : NO!