#include <iostream>
#include <algorithm>

using namespace std;

// int fun(int ar[], int n)
// {

//    for (int i = 0; i < n; i++)
//    {
//       ar[i]=n;
//    }
// };

int main()
{
   int n;
   cin >> n;
   int a[n];
   // int *p = &a[n];
   for (int i = 0; i < n; i++)
   {
      cin >> a[i];
   }
   sort(a, a + n);
   // fun(a, n);
   for (int i = 0; i < n; i++)
   {
      cout << a[i] << endl;
   }
   return 0;
}
