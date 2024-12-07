//----------------------------------------- C. Manhattan Permutations || 1300 ||   -------------------------------

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
    long long int n, k; //  0 ≤ k ≤ 10^12  &&  1 ≤ n ≤ 2⋅10^5,

    cin >> n >> k;
    vector<long long int> v(n);
    int i = 0;
    for (auto &value : v)
    {
        i++;
        value = i;
    }
    i = 0;
    int l = 0, h = n - 1;
    while (k > 0 && h >= l)
    {
        if (2 * (v[h] - v[l]) <= k)
        {
            k = k - 2 * (v[h] - v[l]);
            v[l] = h + 1;
            v[h] = l + 1;
            l++;
            h--;
        }

        else
        {
            h--;
        }
    }
    if (k == 0)
    {
        cout << "yes" << endl;
        for (auto &value : v)
        {
            cout << value << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}


//*____________________________________________________________________________________________________________________________

//*------ Insights--------

// faliure: no faliure || takes time  ....

//  Concept : In this question we use the greedy  and two pointer concept......

// suggestion : just practice  ............

// Somthing New : NO!