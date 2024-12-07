#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7; // Optional for large results

// Function to compute Fibonacci numbers using fast doubling
pair<long long, long long> fib(int n)
{
    if (n == 0)
        return {0, 1};

    auto p = fib(n >> 1);
    long long c = (p.first * ((2 * p.second % MOD - p.first + MOD) % MOD)) % MOD;
    long long d = (p.first * p.first % MOD + p.second * p.second % MOD) % MOD;

    if (n & 1)
        return {d, (c + d) % MOD};
    else
        return {c, d};
}

long long fibonacci(int n)
{
    return fib(n).first;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Fibonacci number F(" << n << ") is " << fibonacci(n) << endl;
    return 0;
}
