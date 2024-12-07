#include <bits/stdc++.h>
using namespace std;
vector<int> getDigits(int number)
{
    vector<int> digits;
    string numStr = to_string(number);
    for (char digitChar : numStr)
    {
        digits.push_back(digitChar - '0'); // Convert char to int
    }
    return digits;
}
void logic()
{
    int result=1, num;
    cin >> num;
    vector<int> arr = getDigits(num);

    int n = arr.size();
    // cout << n << "" << arr[0];
    if (n == 1)
    {
        result = arr[0];

        cout << result << endl;
        return;
    }
    if (arr[0]==1)
    {

result=pow(9,n-1);
  cout << result << endl;
return;
    }
    int i = n-1;
    for (; i >= 0; i--)
    {

        if (arr[i] > 7 || i==0)
        {
            arr[i]=arr[i]-1;
            break;
        }
        result=9*result;
    }

    for (int j = 0; j <=i; ++j)
    {
        result=arr[j]*result;
    }
   




    cout << result << endl;
}
int main()
{

    logic();
}