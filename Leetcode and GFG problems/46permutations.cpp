// Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

// Example 1:

// Input: nums = [1,2,3]
// Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
// Example 2:

// Input: nums = [0,1]
// Output: [[0,1],[1,0]]
// Example 3:

// Input: nums = [1]
// Output: [[1]]

class Solution
{
public:
  vector<vector<int>> ans;

  void solve(vector<int> &nums, int index, int n)
  {
    if (index >= n)
    {
      ans.push_back(nums);
      return;
    }
    for (int i = index; i < n; i++)
    {
      swap(nums[index], nums[i]);
      solve(nums, index + 1, n);
      swap(nums[index], nums[i]);
    }
  }

  vector<vector<int>> permute(vector<int> &nums)
  {
    ans.clear();
    int n = nums.size();
    solve(nums, 0, n);
    return ans;
  }
};
