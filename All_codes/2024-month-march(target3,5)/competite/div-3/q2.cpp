//B. Rudolf and 121 | 

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
    // if (n < 3)
    // {
    //     cout << "no" << endl;
    //     return;
    // }

    for (int j = 0;; j++)
    {
        int x = 0;

        for (int i = 1; i < n - 1; i++)
        {
            if (arr[i] >= 2 && arr[i - 1] >= 1  && arr[i + 1] >= 1)

            {      int y=min({arr[i]/2,arr[i-1],arr[i+1]});
        
                arr[i - 1] = arr[i - 1] - y;
                arr[i] = arr[i] - 2*y;
                arr[i + 1] = arr[i + 1] - y;
                x += 1;
          


            }
        }
      
        if (x == 0)
        {
            break;
        }
    }
  for (int i = 0; i < n; ++i)
  {
      if (arr[i]!=0)
      {
           cout << "no" << endl;
           return;
      }
  }

   
        cout << "yes" << endl;
   
}