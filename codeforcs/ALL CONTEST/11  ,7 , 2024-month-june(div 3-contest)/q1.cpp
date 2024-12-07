#include <bits/stdc++.h>
using namespace std;
#define ll long long;

void logic()
{
    long long int a, b, c;
    cin >> a >> b >> c;
    long long int result = 0;
    for (int i = 0; i <= 5; i++)
    {
        for (int j =0 ; j <= 5; j++)
        {
            for (int k = 0; k <= 5; k++)
            {
                if (i + j + k <= 5)
                {
                    result = max(result, (a + i) * (b + j) * (c + k));
                }
            }
        }
    }

    cout << result << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        logic();
    }
    return 0;
}

//*____________________________________________________________________________________________________________________________

//*------ Insights--------

// faliure: less knowledge of brute force  ....

//  Concept : its a brute force problem......

// suggestion : just practice  ............

// Somthing New : NO!