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
    vector<char> s;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char x;
        cin >> x;
        s.push_back(x);
    }

    int p = 1;

    for (int i = 0; i < n - 1; i++)
    {
        int L1count = 0, O1count = 0;
        int Lcount = 0, Ocount = 0;

        for (int j = 0; j < n - p; j++)
        {
            if (s[j] == 'L')
            {
                L1count++;
            }
            if (s[j] == 'O')
            {
                O1count++;
            }
        }

        for (int j = n - 1; j >= n - p; j--)
        {
            if (s[j] == 'L')
            {
                Lcount++;
            }
            if (s[j] == 'O')
            {
                Ocount++;
            }
        }

        if (L1count != Lcount && O1count != Ocount)
        {
            cout << L1count + O1count << endl;
            return;
        }

        p++;
    }
    cout << -1 << endl;
}

/*  Learnings -------------

1. you can cin string by directly --->>  sring s;
                                         cin>>s;
                                         cout << s;

2.we can use itrators you traverse on vector -->>   for (auto &it : v)
                                                        {
                                                            cout << it << endl;
                                                        }
*/
