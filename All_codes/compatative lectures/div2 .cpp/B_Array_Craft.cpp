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
    return 0;
}

void logic()
{
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> a(n, -1);

    // Fill with 1s up to the maximum prefix position
    for (int i = 0; i < x; ++i) {
        a[i] = 1;
    }

    // Fill with 1s from the maximum suffix position to the end
    for (int i = y - 1; i < n; ++i) {
        a[i] = 1;
    }

    // Print the array
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}
