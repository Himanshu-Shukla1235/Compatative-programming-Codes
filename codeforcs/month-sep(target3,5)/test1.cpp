#include <bits/stdc++.h>  //** inp concept to remember

using namespace std;
bool compareFirstColumn(const std::vector<int>& row1, const std::vector<int>& row2) {
    // Compare based on the values in the first column (column index 0)
    return row1[0] < row2[0];
}

int main()
{

    vector<vector<int>> v;

    for (int i = 0; i < 4; i++)
    {

        int x, y;
        cin >> x;
        cin >> y;
        v.push_back(vector<int>{x, y});

        sort(v.begin(), v.end(),compareFirstColumn);
    }

    for (int i = 0; i < 4; i++)
    {
        cout << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << v[i][j]<<" ";
        }
    }
    return 0;
}