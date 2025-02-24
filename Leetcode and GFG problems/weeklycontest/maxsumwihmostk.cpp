// You are given a 2D integer matrix grid of size n x m, an integer array limits of length n, and an integer k. The task is to find the maximum sum of at most k elements from the matrix grid such that:

// The number of elements taken from the ith row of grid does not exceed limits[i].

// Return the maximum sum.

//  

// Example 1:

// Input: grid = [[1,2],[3,4]], limits = [1,2], k = 2

// Output: 7

// Explanation:

// From the second row, we can take at most 2 elements. The elements taken are 4 and 3.
// The maximum possible sum of at most 2 selected elements is 4 + 3 = 7.
// Example 2:

// Input: grid = [[5,3,7],[8,2,6]], limits = [2,2], k = 3

// Output: 21

// Explanation:

// From the first row, we can take at most 2 elements. The element taken is 7.
// From the second row, we can take at most 2 elements. The elements taken are 8 and 6.
// The maximum possible sum of at most 3 selected elements is 7 + 8 + 6 = 21.©leetcode
class Solution
{
public:
  long long maxSum(vector<vector<int>> &grid, vector<int> &limits, int k)
  {
    vector<int> v;
    long long maxSum = 0;
    int n = grid.size();
    for (int i = 0; i < n; ++i)
    {
      sort(grid[i].rbegin(), grid[i].rend());
      for (int j = 0; j < min((int)grid[i].size(), limits[i]); ++j)
      {
        v.push_back(grid[i][j]);
      }
    }
    sort(v.rbegin(), v.rend());
    for (int i = 0; i < min(k, (int)v.size()); ++i)
    {
      maxSum += (long long)v[i];
    }
    return maxSum;
  }
};
