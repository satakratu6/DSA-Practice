// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.
class Solution
{
public:
  vector<vector<int>> threeSum(vector<int> &nums)
  {
    int n = nums.size();
    int target = 0;
    sort(nums.begin(), nums.end());
    set<vector<int>> s;
    vector<vector<int>> output;
    for (int i = 0; i < n; i++)
    {
      int j = i + 1;
      int k = n - 1;
      while (j < k)
      {
        int sum = nums[i] + nums[j] + nums[k];
        if (sum == target)
        {
          s.insert({nums[i], nums[j], nums[k]});
          j++;
          k--;
        }
        else if (sum < target)
        {
          j++;
        }
        else
        {
          k--;
        }
      }
    }
    for (auto x : s)
    {
      output.push_back(x);
    }
    return output;
  }
};