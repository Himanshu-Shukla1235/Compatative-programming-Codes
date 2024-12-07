// C. Make Equal Again || 1000
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
    int count = 0, n, count1 = 0;

    cin >> n;

    vector<int> arr(n);

    for (auto &element : arr)
    {
        cin >> element;
    }

    int i = 0;
    for (; i < n; i++)
    {
        if (arr[i] != arr[0])
        {

            break;
        }
        count += 1;
    }

    if (arr[n - 1] == arr[0])
    {
        for (int j = n - 1; j > i; j--)

        {
            if (arr[j] != arr[0])
            {

                break;
            }
            count += 1;
        }
    }

    i = 0;
    for (; i < n; i++)
    {
        if (arr[i] != arr[n - 1])
        {

            break;
        }
        count1 += 1;
    }

  
   
        for (int j = n - 1; j > i; j--)

        {
            if (arr[j] != arr[n - 1])
            {

                break;
            }
            count1 += 1;
        }



    int y = max(count, count1);

    cout << n - y << endl;
}
