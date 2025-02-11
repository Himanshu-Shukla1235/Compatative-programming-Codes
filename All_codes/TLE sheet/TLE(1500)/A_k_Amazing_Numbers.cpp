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
  || decimalToBinary : TC - logn |  convert to binary ||
  ||divisorCount1 : TC-logn   || to know the count of divisors ,int includes itself and 1 as well
  ||divisorCount2 : TC-root(n)   || to know the count of divisors by trial division method
  ||divisorSum_1: TC-o(root(n).logn ||to know the count of divisors ,int includes itself and 1 as well
  ||divisorSum_1 : TC - o(logn) ||  to know the sum of divisors ,int includes itself and 1 as well

 ...... COMBANOTORICS................
|| PreXorSum : TC - o(n )|  pre xor  sum arrey ||

*/
//!________________________________ The search for meaning often leads to ! _______________________________
bool bs(vector<ll> &maxGaps, ll num, ll mid) {
    return maxGaps[num] >= mid;
}

void logic() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    
    for (ll &val : v) {
        cin >> val;
    }

    vector<ll> ans(n, -1);
    unordered_map<ll, vector<ll>> positions;  // Store positions of each number

    // Step 1: Store positions of each number
    FOR(i, 0, n) {
        positions[v[i]].push_back(i);
    }

    // Step 2: Compute max gap for each number
    vector<ll> maxGaps(n + 1, 0);
    
    for (auto &p : positions) {
        ll num = p.first;
        auto &indices = p.second;

        ll maxGap = indices[0] + 1;  // First gap (start of array)
        
        for (ll i = 1; i < indices.size(); i++) {
            maxGap = max(maxGap, indices[i] - indices[i - 1]);
        }

        maxGap = max(maxGap, n - indices.back());  // Last gap (end of array)
        maxGaps[num] = maxGap;
    }

    // Step 3: Perform the modified binary search
    for (ll i = n; i >= 1; i--) {
        ll push = -1, l = 0, r = n;

        while (l <= r) {
            ll mid = l + ((r - l) / 2);
            if (bs(maxGaps, i, mid)) {
                push = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        if (push != -1 && push != 0) {
            ans[push - 1] = i;
        }
    }

    // Step 4: Fill in missing values in ans[]
    ll num = -1;
    FOR(i, 0, n) {
        if (ans[i] != -1) {
            num = (num == -1) ? ans[i] : min(num, ans[i]);
        }
        ans[i] = num;
    }

    // Print final result
    for (ll val : ans) {
        cout << val << " ";
    }
    COUT("");
}


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


// void logic()
// {
//     ll n;
//     cin >> n;

//     vector<ll> v(n);
//     AUTO_IT(v)
//     {
//         cin >> val;
//     }

//     vector<ll> ans(n, -1);
//     //  map<ll, ll> mp; // debug
  

//     for (ll i = n; i >= 1; i--)
//     {
//         ll push = -1;
//         ll l = 0, r = n;
//         while (l <= r)
//         {
//             ll mid = l + ((r - l) / 2);

//             bool ch = bs(v, i, mid);

//             if (ch)
//             {

//                 push = mid;
//                 l = mid + 1;
//             }
//             else
//             {
//                 r = mid - 1;
//             }
//         }
//         // mp[i] = push;  // debug
//         if (push != -1 && push != 0)
//         {
//             ans[push - 1] = i;
//         }
//     }
//     //------------------------------------------debug
//     // for (const auto &pair : mp)
//     // {
//     //     cout << pair.first << " -> " << pair.second << endl;
//     // }
//     //-------------------------------------------------
//     ll num = -1;
//     FOR(i, 0, n)
//     {

//         if (ans[i] != -1)
//         {
//             if (num == -1)
//             {
//                 num = ans[i];
//             }
//             num = min(num, ans[i]);
//         }

//         ans[i] = num;
//     }

//     AUTO_IT(ans)
//     {
//         cout << val << " ";
//     }
//     COUT("");
// }

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