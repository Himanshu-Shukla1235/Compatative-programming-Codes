//------------------------------------------------  ||  ----------------------------
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define maxi INT_MAX
#define mini INT_MIN

//.......................... function declarations ................................
void logic();
ll factorial(ll n);

//..................................................................................

int main()
{
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
    int n, k,result=0;
    cin >> n >> k;
    vector<int> v;

    map<int, int> mp;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int x = i + j;
            mp[x]++;
        }
    }

    // Output the map contents
    for (const auto &pair : mp)
    {
        // cout << "Sum: " << pair.first << ", Count: " << pair.second << endl;
        v.push_back(pair.second);
    }
    // Sort the vector in descending order
    sort(v.begin(), v.end(), [](int a, int b)
         { return a > b; });
    // Print the sorted vector
    // for (int num : v)
    // {
    //     cout << num << " ";
    // }
    for (int i = 0; i < v.size(); i++)
    {
         if (k<=0)
         {
           break;
         }
         
         k=k-v[i];
         result++;
         
    }
    cout <<result<< endl;
}

//............................... function codes ..........................................

// 1._____________factorial function_____________________

ll factorial(ll n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

//..........................................................................................

//------ Insights--------

// failure: no failure!  ....

// Concept : just practice mathematics questions  ......

// suggestion : speed up ............

// Something New : NO!