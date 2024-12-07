//----------------------------------B. Turtle and an Infinite Sequence || 1300 ---------------------
#include <bits/stdc++.h>
using namespace std;

void logic();

int numberOfDigits(long long int num)
{
    // Handle the case where the number is 0
    if (num == 0)
        return 1;

    // Make sure to work with the absolute value for negative numbers
    num = abs(num);

    int count = 0;
    while (num > 0)
    {
        num /= 10;
        count++;
    }

    return count;
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

    long long int n, m;

    cin >> n >> m;
    vector<long long int> v;
    v.push_back(1);
    long long int digitCount = numberOfDigits(n);
    long long int result = n;
    for (int i = 1; i <= n + m; ++i)
    {
        long long int value = i - 1 | i | (i + 1);
        v.push_back(value);
    }
    //  for (int i = 0; i <=n + m; ++i)
    // {
    //   cout<<v[i] <<endl;
    // }

    if (digitCount > 2)
    {
        digitCount = digitCount - 2;
    }

    n = n + (m / digitCount) - 1;
    cout << n << " ";
    if (m > 0)
    {
        if (n > 0)
        {
            result = v[n];
        }
    }

    cout << result << endl;
}