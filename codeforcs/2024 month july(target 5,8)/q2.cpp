//---------------------------------------------- A. MEX Game 1 || 1300  -------------------------------------------
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

    int n;

    cin >> n;

    map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        m[x]++;
    }
    int flag = 0, result = n;
    for (int i = 0; i < n; i++)
    {
        int a = m[i];

        if (a == 0)
        {
            result = i;
            break;
        }
        else if (a == 1 && flag == 0)
        {
            m[i] = m[i] - 2;
            flag++;
        }
        else if (flag == 1 && a == 1)
        {

            m[i]--;
            flag--;
            if (m[i] == 0)
            {
                result = i;
                break;
            }
        }
    }

    cout << result << endl;
}




//*____________________________________________________________________________________________________________________________

//*------ Insights--------

// faliure: no faliure || can be faster  ....

//  Concept : yes you can say its greedy approach but it is  logical qestion......

// suggestion : speed up  ............

// Somthing New : NO!