// You are given an m x n binary matrix grid. An island is a group of 1's (representing land) connected 4-directionally (horizontal or vertical.) You may assume all four edges of the grid are surrounded by water.

// The area of an island is the number of cells with a value 1 in the island.

// Return the maximum area of an island in grid. If there is no island, return 0.
class Solution
{
public:
  int maxAreaOfIsland(vector<vector<int>> &grid)
  {
    int n = grid.size();
    int m = grid[0].size();
    int area = 0;
    for (int r = 0; r < n; r++)
    {
      for (int c = 0; c < m; c++)
      {
        if (grid[r][c])
        {
          int ans = 0;
          getArea(grid, r, c, ans);
          area = max(area, ans);
        }
      }
    }
    return area;
  }
  void getArea(vector<vector<int>> &grid, int r, int c, int &a)
  {
    int n = grid.size();
    int m = grid[0].size();
    if (r >= 0 && c >= 0 && r < n && c < m && grid[r][c])
    {
      a++;
      grid[r][c] = 0;
      getArea(grid, r - 1, c, a);
      getArea(grid, r, c - 1, a);
      getArea(grid, r + 1, c, a);
      getArea(grid, r, c + 1, a);
    }
  }
};