// ---------------------------------C. Insert and Equalize--------------------------------------

#include <bits/stdc++.h>

using namespace std;

void logic();
// Function to calculate GCD of two numbers
long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}
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
    long long int n, result = 0, x;
    cin >> n;

    vector<long long int> v(n);

    for (auto &value : v)
    {
        cin >> value;
    }

    sort(v.begin(), v.end());
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    long long int gcdResult = v[n - 1] - v[0];

    for (int i = 1; i < n - 1; i++)
    {
        gcdResult = gcd(gcdResult, v[n - 1] - v[i]);
    }

    x = v[n - 1] + gcdResult;
    for (int i = n - 1; i >= 0; --i)
    {
        if (i == 0)
        {
            x = v[0] - gcdResult;
            break;
        }
        if ((v[i] - gcdResult) > v[i - 1])
        {
            x = v[i] - gcdResult;

            break;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        result = result + ((v[n - 1] - v[i]) / gcdResult);
    }
    result = result + ((v[n - 1] - x) / gcdResult);
    cout << result << endl;
    return;
}

//*____________________________________________________________________________________________________________________________

//*------ Insights--------

// faliure: I am not able to do use of gcd perfectly ....

//  Concept : In this question we use the gcd concept......

// suggestion : perfect and practice gcd and mathamatics related questions ............

// Somthing New : NO!