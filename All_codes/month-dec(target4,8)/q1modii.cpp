#include <bits/stdc++.h>
using namespace std;

void logic();

int main()
{
    logic();
    return 0;
}

void logic()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    for (int i = 1; i < n; i++)
    {
        int L1count = count(s.begin(), s.begin() + i, 'L');
        int O1count = count(s.begin(), s.begin() + i, 'O');

        int Lcount = count(s.rbegin(), s.rbegin() + i, 'L');
        int Ocount = count(s.rbegin(), s.rbegin() + i, 'O');

        if (L1count != Lcount && O1count != Ocount)
        {
            cout << L1count + O1count << endl;
            return;
        }
    }

    cout << -1 << endl;
}
