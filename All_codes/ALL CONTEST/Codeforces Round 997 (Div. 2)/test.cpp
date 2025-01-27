#include <bits/stdc++.h>
using namespace std;

string Solve(int N)
{
    long long sum = 0;
    for (int i = 1; i * i <= N + 1; i++)
    {
        if (N % i == 0)
        {
            sum += i;
             // Add the pair divisor if it's not the same as i and not n
            if (i != 1 && i != N / i) {
                sum += N / i;
            }
        }

    }
    cout << sum << " ";
    if (sum == N)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for (int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;
        string out = Solve(N);
        cout << out << "\n";
    }
}