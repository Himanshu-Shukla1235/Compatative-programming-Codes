
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void dfs(vector<vector<int>>& image, int iniCol, int newCol, 
             vector<int>& rowdel, vector<int>& coldel, int sr, int sc) {
        int n = image.size();
        int m = image[0].size();

        image[sr][sc] = newCol; // Fill the color

        for(int i = 0; i < 4; i++) {
            int newRow = sr + rowdel[i];
            int newColIdx = sc + coldel[i];

            if(newRow >= 0 && newColIdx >= 0 && newRow < n && newColIdx < m && 
               image[newRow][newColIdx] == iniCol) {
                dfs(image, iniCol, newCol, rowdel, coldel, newRow, newColIdx);
            }
        }
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int n = image.size();
        int m = image[0].size();
        int iniCol = image[sr][sc];

        if (iniCol == newColor) return image; // Prevent infinite recursion

        vector<int> rowdel = {-1, 1, 0, 0};
        vector<int> coldel = {0, 0, -1, 1};

        dfs(image, iniCol, newColor, rowdel, coldel, sr, sc);

        return image;
    }
};
