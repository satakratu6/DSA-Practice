
// Code
// Testcase
// Testcase
// Test Result
// 34. Find First and Last Position of Element in Sorted Array
// Solved
// Medium
// Topics
// Companies
// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

// If target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.

// Example 1:

// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]
// Example 2:

// Input: nums = [5,7,7,8,8,10], target = 6
// Output: [-1,-1]
// Example 3:

// Input: nums = [], target = 0
// Output: [-1,-1]
class Solution
{
private:
  int binarySearch(vector<int> &nums, int low, int high, int target)
  {
    while (low <= high)
    {
      int mid = low + (high - low) / 2;
      if (nums[mid] < target)
      {
        low = mid + 1;
      }
      else
      {
        high = mid - 1;
      }
    }
    return low;
  }

public:
  vector<int> searchRange(vector<int> &nums, int target)
  {
    int low = 0, high = nums.size() - 1;
    int start = binarySearch(nums, low, high, target);
    int end = binarySearch(nums, low, high, target + 1) - 1;
    if (start < nums.size() && nums[start] == target)
    {
      return {start, end};
    }
    return {-1, -1};
  }
};