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
    long long int digitCount = numberOfDigits(n);
    long long int result = n;

    if (digitCount > 2)
    {
        digitCount = digitCount - 2;
    }

    n = n + (m / digitCount) - 1;
    // cout <<n<<" ";

    if (m > 0)
    {
        if (n - 1 >= 0)
        {
            result = (n - 1) | (n) | (n + 1);
        }
        else
        {
            result = (n) | (n + 1);
        }
    }
    cout << result << endl;
}