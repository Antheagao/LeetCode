#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
    private:
        void dfs(vector<vector<char>>& grid, int row, int col)
        {
            if (row < 0 || row > grid.size() - 1 || col < 0 || col > grid[row].size() - 1 || grid[row][col] == '0')
            {
                return;
            }
            grid[row][col] = '0';

            dfs(grid, row + 1, col);
            dfs(grid, row, col + 1);
            dfs(grid, row + 1, col + 1);
            dfs(grid, row - 1, col);
            dfs(grid, row, col - 1);
            dfs(grid, row - 1, col - 1);
        }

    public:
        int numIslands(vector<vector<char>>& grid) 
        {
            int islands = 0;

            for (int row = 0; row < grid.size(); ++row)
            {
                for (int col = 0; col < grid[row].size(); ++col)
                {
                    if (grid[row][col] == '1')
                    {
                        ++islands;
                        dfs(grid, row, col);
                    }
                }
            }
            return islands;
        }
};