// B. Following the String | 900

#include <bits/stdc++.h>
void logic();
using namespace std;
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

    int n;
    cin >> n;
    char character = 'a';
    vector<pair<char, int>> arr;
    vector<int> a(n);
    for (auto &element : a)
    {
        cin >> element;
    }

    arr.push_back({character, 1});
    cout << 'a';
    for (int i = 1; i < n; i++)
    {
        if (a[i] == 0)
        {
            character++;
            arr.push_back({character, 1});
            cout << character;
        }

        else if (a[i] != 0)
        {

            for (int j = 0; j < i; j++)
            {
                if (arr[j].second == a[i])
                {
                    arr[j].second += 1;

                    cout << arr[j].first;
                    break;
                }
            }
        }
    }
    // for (int i = 0; i < n; ++i)
    // {
    //     cout << arr[i].first << arr[i].second;
    // }
    cout << endl;
}