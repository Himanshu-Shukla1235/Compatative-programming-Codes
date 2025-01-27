#include <bits/stdc++.h>
using namespace std;

#define ll long long int
const ll M = 1e9 + 7; 
#define aa ios::sync_with_stdio(false)
#define bb cin.tie(nullptr)

ll bfs(vector<vector<pair<ll, ll>>> &mat, vector<vector<ll>> &vis, vector<pair<ll, ll>> ele, ll d, ll n, ll m) {
    if(ele.size() == 0) return -1;

    vector<pair<ll, ll>> next;
   
    for(auto it : ele) {
        ll x = mat[it.first][it.second].first;
        ll y = mat[it.first][it.second].second;
        ll i = it.first, j = it.second;
        if(i + x < n && j + y < m && !vis[i + x][j + y]) {
            vis[i + x][j + y] = 1;
            next.push_back({i + x, j + y});
            if(i + x == n - 1 && j + y == m - 1) {
                return d;
            }
        }
        if(i - x >= 0 && j + y < m && !vis[i - x][j + y]) {
            vis[i - x][j + y] = 1;
            next.push_back({i - x, j + y});
            if(i - x == n - 1 && j + y == m - 1) {
                return d;
            }

        }
        if(i + x < n && j - y >= 0 && !vis[i + x][j - y]) {
            vis[i + x][j - y] = 1;
            next.push_back({i + x, j - y});
            if(i + x == n - 1 && j - y == m - 1) {
                return d;
            }

        }
        if(i - x >= 0 && j - y >= 0 && !vis[i - x][j - y]) {
            vis[i - x][j - y] = 1;
            next.push_back({i - x, j - y});
            if(i - x == n - 1 && j - y  == m - 1) {
                return d;
            }

        }

        if(i + y < n && j + x < m && !vis[i + y][j + x]) {
            vis[i + y][j + x] = 1;
            next.push_back({i + y, j + x});
            if(i + y == n - 1 && j + x == m - 1) {
                return d;
            }
        }
        if(i - y >= 0 && j + x < m && !vis[i - y][j + x]) {
            vis[i - y][j + x] = 1;
            next.push_back({i - y, j + x});
            if(i - y == n - 1 && j + x == m - 1) {
                return d;
            }

        }
        if(i + y < n && j - x >= 0 && !vis[i + y][j - x]) {
            vis[i + y][j - x] = 1;
            next.push_back({i + y, j - x});
            if(i + y == n - 1 && j - x == m - 1) {
                return d;
            }

        }
        if(i - y >= 0 && j - x >= 0 && !vis[i - y][j - x]) {
            vis[i - y][j - x] = 1;
            next.push_back({i - y, j - x});
            if(i - y == n - 1 && j - x == m - 1) {
                return d;
            }

        }
    }

    return bfs(mat, vis, next, d + 1, n, m);
}

void solve() {
    ll n, m; cin >> n >> m;
    vector<vector<pair<ll, ll>>> mat(n, vector<pair<ll, ll>>(m));

    for(ll i = 0; i < n; ++i){
        for(ll j = 0; j < m; ++j){
            ll x, y; cin >> x >> y;
            mat[i][j] = {x, y};
        }
    }


    vector<pair<ll, ll>> ele;
    ele.push_back({0, 0});

     vector<vector<ll>> vis(n, vector<ll>(m, 0));
     vis[0][0] = 1;

     ll ans = bfs(mat, vis, ele, 1, n, m);
     cout<<ans<<"\n";


}

int main() {
    aa; bb;

    ll t; cin >> t;
    while (t--) solve();
return 0;
}
