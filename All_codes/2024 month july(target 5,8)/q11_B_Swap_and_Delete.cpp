//----------------------------------------------- B_Swap_and_Delete ||1000  --------------------------------------------

#include <bits/stdc++.h>

using namespace std;
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
    string s, b;
    cin >> s;
    // cout << s << " ";
    int countz = 0, counto = 0, result = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            countz++;
        }
        else
        {
            counto++;
        }
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0' && counto != 0)
        {

            b.push_back('1');
            counto--;
        }
        else if (s[i] == '1' && countz != 0)
        {
            countz--;

            b.push_back('0');
        }
        else
        {
            result++;
        }
    }

    // cout << b << " ";

    for (int i = 0; i < b.length(); i++)
    {
        if (b[i] == s[i])
        {
            while (i < b.length() - 1)
            {
                if (b[i] == b[i + 1])
                {
                    result++;
                }
                else
                {
                    break;
                }
                i++;
            }

            result++;
        }
    }
    cout << result << endl;
}