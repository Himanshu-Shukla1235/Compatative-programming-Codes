#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void logic() {
    ll n, d, l;
    cin >> n >> d >> l;

    vector<pair<ll, ll>> ans;  // Stores the edges of the tree

    // If the required tree is not possible:
    if (d >= n || l < 2 || l > n || d + 1 > n) {
        cout << -1 << "\n";
        return;
    }

    // Step 1: Construct the exact diameter path
    ll T_no_dia = d + 1;  // Nodes along the diameter
    for (ll i = 2; i <= T_no_dia; ++i) {
        ans.push_back({i - 1, i});
    }

    ll left_nodes = n - T_no_dia;  // Remaining nodes after forming the diameter
    ll mid_point = (d / 2) + 1;    // Center of the diameter
    ll stpoint = T_no_dia + 1;     // Next available node to use

    // Step 2: Assign leaves to nodes along the diameter
    ll leaves_assigned = 0;
    vector<ll> leaf_parent_candidates;
    for (ll i = 1; i <= T_no_dia; ++i) {
        leaf_parent_candidates.push_back(i);
    }

    for (ll i = 0; i < l - 2 && !leaf_parent_candidates.empty(); ++i) {
        ll parent = leaf_parent_candidates.back();
        leaf_parent_candidates.pop_back();
        ans.push_back({parent, stpoint});
        stpoint++;
        left_nodes--;
        leaves_assigned++;
    }

    if (leaves_assigned < l - 2) {
        cout << -1 << "\n";
        return;
    }

    // Step 3: Distribute remaining nodes while maintaining the binary tree structure
    queue<ll> available_parents;  // To ensure binary tree properties
    for (ll i = 1; i <= T_no_dia; ++i) {
        available_parents.push(i);
    }

    while (left_nodes > 0 && !available_parents.empty()) {
        ll parent = available_parents.front();
        available_parents.pop();

        for (int child_count = 0; child_count < 2 && left_nodes > 0; ++child_count) {
            ans.push_back({parent, stpoint});
            available_parents.push(stpoint);
            stpoint++;
            left_nodes--;
        }
    }

    if (left_nodes > 0) {
        cout << -1 << "\n";
        return;
    }

    // Step 4: Output the edges
    for (auto &edge : ans) {
        cout << edge.first << " " << edge.second << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        logic();
    }
    return 0;
}
