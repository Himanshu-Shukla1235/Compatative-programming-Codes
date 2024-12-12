// *most effective version of tghe trial division .

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to find all factors of a number efficiently
vector<long long> getFactors(long long n)
{
    vector<long long> factors;

    // Handle 1 as a special case
    if (n == 1)
    {
        factors.push_back(1);
        return factors;
    }

    // Check divisibility by 2
    if (n % 2 == 0)
    {
        factors.push_back(2);
        if (2 != n / 2)
        {
            factors.push_back(n / 2);
        }
    }

    // Check odd numbers from 3 to sqrt(n)
    for (long long i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            factors.push_back(i);
            if (i != n / i)
            {
                factors.push_back(n / i);
            }
        }
    }

    // Add the number itself as a factor
    factors.push_back(1);
    if (n != 1)
    {
        factors.push_back(n);
    }

    return factors;
}

int main()
{
    long long n;
    cout << "Enter a number: ";
    cin >> n;

    vector<long long> factors = getFactors(n);

    cout << "Factors of " << n << " are: ";
    for (long long factor : factors)
    {
        cout << factor << " ";
    }
    cout << endl;

    return 0;
}
