#include <bits/stdc++.h>
using namespace std;
void search(int x, vector<int>& a, int n);

int main()
{
    int x, n;
    cin >> n>>x;
    vector<int> a(n);
    for (auto &value : a)
    {
        cin >> value;
    }
    search(x, a, n);
}

void search(int x, vector<int>&a, int n)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (x < a[mid])
        {
            high = mid - 1;
        }
        else if (x > a[mid])
        {
            low = mid + 1;
        }
        else  
        {
            cout << "value foound at index -> " << mid;
            return;
        }
    }
    cout << "Value not found" << endl;
}
