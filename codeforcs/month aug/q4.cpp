#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;

    cin >> t;

    while (t--)
    {
        vector<char> a;
        char ch, ans;

        for (int i = 0; i < 8; i++)
        {

            for (int j = 0; j < 8; j++)
            {
                cin >> ch;

                if (ch != '.')
                {
                    a.push_back(ch);
                }
            }
        }
        for (int i = 0; i < a.size() - 1; i++)
        {

            cout << a[i];
        }
        cout << a[a.size() - 1] << endl;
    }
    return 0;
}