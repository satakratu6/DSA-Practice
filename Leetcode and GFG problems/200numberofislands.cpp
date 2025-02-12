
// Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands.

// An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

#include <vector>
#include <queue>

using namespace std;

class Solution
{
public:
  int numIslands(vector<vector<char>> &grid)
  {
    int count = 0;
    int rows = grid.size();
    if (rows == 0)
      return 0;
    int cols = grid[0].size();

    for (int r = 0; r < rows; r++)
    {
      for (int c = 0; c < cols; c++)
      {
        if (grid[r][c] == '1')
        {
          count++;
          bfs(r, c, grid, rows, cols);
        }
      }
    }
    return count;
  }

private:
  void bfs(int r, int c, vector<vector<char>> &grid, int rows, int cols)
  {
    queue<pair<int, int>> q;
    q.push({r, c});
    grid[r][c] = '0';

    vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    while (!q.empty())
    {
      auto [row, col] = q.front();
      q.pop();

      for (auto [dr, dc] : directions)
      {
        int nr = row + dr;
        int nc = col + dc;

        if (nr >= 0 && nc >= 0 && nr < rows && nc < cols && grid[nr][nc] == '1')
        {
          q.push({nr, nc});
          grid[nr][nc] = '0';
        }
      }
    }
  }
};
