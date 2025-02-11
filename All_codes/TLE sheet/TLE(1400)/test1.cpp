#include <bits/stdc++.h>
using namespace std;

class Solution
{

    void bfs(vector<vector<char>> &grid, int xnode, int ynode, vector<vector<int>> &vis)
    {
        int n = grid.size();
        int m = grid[0].size();

        queue<pair<int, int>> q;
        q.push({xnode, ynode});
        vis[xnode][ynode] = 1;

        while (!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for (int delr = -1; delr <= 1; delr++)
            {
                for (int delc = -1; delc <= 1; delc++)
                {
                    int newRow = row + delr;
                    int newCol = col + delc;

                    // Corrected bounds check to prevent accessing out-of-bounds indices
                    if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < m &&
                        grid[newRow][newCol] == '1' && vis[newRow][newCol] == 0 && delc != delr)
                    {

                        vis[newRow][newCol] = 1;
                        q.push({newRow, newCol});
                    }
                }
            }
        }
    }

public:
    int numIslands(vector<vector<char>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0)); // Fixed vis declaration

        int res = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == '1' && vis[i][j] == 0)
                {
                    res++;
                    bfs(grid, i, j, vis);
                }
            }
        }

        return res;
    }
};
