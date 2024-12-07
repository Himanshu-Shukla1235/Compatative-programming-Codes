#include <bits/stdc++.h>
using namespace std;

void logic() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }

    if (n == 1 && m == 1) {
        cout << -1 << endl;
        return;
    }

    if (m == 1) {
        for (int i = 0; i < n - 1; i++) {  // Ensure we don't access out of bounds
            int x = v[i][0];
            v[i][0] = v[i + 1][0];
            v[i + 1][0] = x;
        }
    } else {
        for (int i = 0; i < n; i++) {
            rotate(v[i].begin(), v[i].end() - 1, v[i].end());
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        logic();
    }
}
