//*______________________________________________  ||  __________________________________________________
/*
                                                                                                                                                                       //|
                                                                                                                                                                       //|
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>__  ⭐⭐⭐          __<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<



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
ll countii(const vector<ll> &v, ll i)
{
    ll count = 0;
    ll n = v.size();

    if (i < n - 1 && v[i] == v[i + 1])
    {
        count++;
    }
    if (i > 0 && v[i] == v[i - 1])
    {
        count++;
    }

    return count;
}
int main()
{
    ios::sync_with_stdio(false); // Disable synchronization
    cin.tie(nullptr);            // Untie cin from cout

    int t;
    cin >> t;
    while (t--)
    {
        logic2();
    }
    return 0;
}

// i have proble m in my logic  which is i used the greedy method but the state of the index are dependent so we shoud use dp
void logic()
{
    ll n;
    cin >> n;
    vector<ll> v(n);

    for (ll i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    for (ll i = 1; i <= (n + 2 - 1) / 2; ++i)
    {
        ll ind = n - i + 1;
        if (max(countii(v, i - 1), countii(v, ind - 1)))
        {
        }
    }

    ll count = 0;
    for (ll i = 1; i < n; ++i)
    {
        if (v[i] == v[i - 1])
        {
            count++;
        }
    }

    COUT(count);
}

// sol using dp .......   best one
void logic2()
{

    int arraySize;
    cin >> arraySize;
    vector<int> elements(arraySize);
    for (int index = 0; index < arraySize; index++)
    {
        cin >> elements[index];
    }

    int halfSize = (arraySize + 1) / 2;
    vector<vector<int>> dpTable(halfSize, vector<int>(2, 0));
    for (int i = 1; i < halfSize; i++)
    {
        dpTable[i][0] =
            min(dpTable[i - 1][0] + (elements[i] == elements[i - 1]) + (elements[arraySize - i - 1] == elements[arraySize - i]),
                dpTable[i - 1][1] + (elements[i] == elements[arraySize - i]) + (elements[arraySize - i - 1] == elements[i - 1]));

        dpTable[i][1] =
            min(dpTable[i - 1][1] + (elements[i] == elements[i - 1]) + (elements[arraySize - i - 1] == elements[arraySize - i]),
                dpTable[i - 1][0] + (elements[i] == elements[arraySize - i]) + (elements[arraySize - i - 1] == elements[i - 1]));
    } // O(n)

    int result = min(dpTable[halfSize - 1][0], dpTable[halfSize - 1][1]);
    if (arraySize % 2 == 0)
        result += (elements[arraySize / 2 - 1] == elements[arraySize / 2]);
    cout << result << '\n';
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

// failure: no failure!  ....

// Concept of efficient sol. : just practice mathematics questions   ......

// concpt used by me : jsut simple mathematics logic

// suggestion : speed up ............

// Something New : NO!