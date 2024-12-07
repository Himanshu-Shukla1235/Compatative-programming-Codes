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
    vector<int> arr(n);

    for (auto &value : arr)
    {

        cin >> value;
    }
  
    int result = 0;
    for (int i = 0; i < n-2; i++)
    {
        int a, b, c;
        a = arr[i];
        b = arr[i + 1];
        c = arr[i + 2];

        for (int j = i + 1; j < n - 2; j++)
        {
            int count = 0;
            if (a == arr[j])
            {
                count = count + 1;
            }
            if (b == arr[j + 1])
            {
                count = count + 1;
              
            }
            if (c == arr[j + 2])
            {
                count = count + 1;
                
            }

            if (count == 2)
            {
                result = result + 1;
            }
        }
    }
    cout << result << endl;
}