
//---------------------------------------------------------- D_Divide_and_Equalize || 1300 -------------------------------
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// Function to print prime factors of a number
void primeFactors(int n, map<int, int> &mp)
{
    // Handle the number of 2s that divide n
    while (n % 2 == 0)
    {

        mp[2]++;
        n /= 2;
    }

    // n must be odd at this point, so a skip of 2 (i.e., i = i + 2) is possible
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            mp[i]++;
            n /= i;
        }
    }

    // This condition is to check if n is a prime number
    // greater than 2
    if (n > 2)
    {
        mp[n]++;
    }
}
void logic();
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        logic();
    }
}

void logic()
{

    int n;
    cin >> n;
    vector<ll> v(n);

    for (auto &val : v)
    {
        cin >> val;
    }

    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        primeFactors(v[i], mp);
    }

    for (auto &pair : mp)
    {
        if (pair.second % n != 0)
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << " YES" << endl;
}

//*____________________________________________________________________________________________________________________________

//*------ Insights--------

// faliure: no faliure!  ....

//  Concept : just practice mathematics question  ......

// suggestion : speed up  ............

// Somthing New : NO!
