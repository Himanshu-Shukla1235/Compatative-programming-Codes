//*______________________________________________ B_Box_Fitting || 1300 __________________________________________________
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
long long findLargestLessThanOrEqual(const std::vector<long long> &v, long long value);

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

#include <bits/stdc++.h>
using namespace std;

// Function to find the index of the largest value less than or equal to the given value
long long findIndexOfLargestLessThanOrEqual(const vector<long long> &v, long long value)
{
    auto it = lower_bound(v.begin(), v.end(), value);
    if (it != v.begin() && (it == v.end() || *it > value))
    {
        --it; // Move to the previous element if needed
    }
    return (it != v.end() && *it <= value) ? (it - v.begin()) : -1;
}

void logic()
{
    long long n, k, result = 0;
    cin >> n >> k;
    vector<long long> v(n);

    for (auto &val : v)
    {
        cin >> val;
    }
    sort(v.begin(), v.end());

    while (!v.empty())
    {
        long long current_val = k - v.back();
        v.pop_back();
        while (current_val > 0 && !v.empty())
        {
            long long index = findIndexOfLargestLessThanOrEqual(v, current_val);
            if (index != -1 && v[index] != 0)
            {
                current_val -= v[index];
                v.erase(v.begin() + index); // Remove used element
            }
            else
            {
                break;
            }
        }
        result++;
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

// 3...............................Function to find the largest value less than or equal to the given value.......................................

long long findLargestLessThanOrEqual(const std::vector<long long> &v, long long value)
{
    // Use lower_bound to find the insertion point
    auto it = std::lower_bound(v.begin(), v.end(), value);

    // Check if the iterator is valid and not at the beginning of the range
    if (it != v.begin() && (it == v.end() || *it > value))
    {
        --it; // Move to the previous element if needed
    }

    // Return the index if it's valid, otherwise return -1
    return (it != v.end() && *it <= value) ? (it - v.begin()) : -1;
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

// Concept : nothing but the better implementation of code or one type of code we need in many questions i used in this question like use of the pop up and removing elements if we need sometime doesnt exeed the time limit  ......

// suggestion : do some common concecpt implementation practice  ............

// Something New : the one common concept of writing code !