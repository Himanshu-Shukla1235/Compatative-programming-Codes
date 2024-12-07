//------------------------------------------------- A. Helmets in Night Light || 1000 ---------------------------------------

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
    int n, p;
    cin >> n >> p;
    vector<int> v(n);
    vector<int> v1(n);
    for (auto &val : v)
    {
        cin >> val;
    }
    for (auto &val : v1)
    {
        cin >> val;
    }
    vector<pair<int, int>> matrix(n);

    for (int i = 0; i < n; i++)
    {
      matrix[i]=  make_pair(v1[i], v[i]);
    }

    // Sort based on the second row
    sort(matrix.begin(), matrix.end());

    long long int result = p, moved = 1;

    for (auto i = 0; i < n && moved < n; ++i)
    {
        int key = matrix[i].first;
        int value = matrix[i].second;

        for (int j = 0; j < value && moved < n; j++)
        {
            if (key <= p)
            {
                result += key;
                // cout << key << " ";
            }
            else
            {
                result += p;
                // cout << p << " ";
            }
            moved++;
        }
    }

    cout << result << endl;
}
//*____________________________________________________________________________________________________________________________

//*------ Insights--------

// faliure: no faliure || too late submmision due to code writing is bad but logic is correct  ....

//  Concept : nothing new concept is used  just you have to be better in using stl ......

// suggestion : speed up  ............

// Somthing New : NO!