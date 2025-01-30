// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

// You must solve this problem without using the library's sort function.
class Solution
{
public:
  void sortColors(vector<int> &nums)
  {
    // Dutch flag algorithm
    int n = nums.size();
    int left = 0;
    int right = n - 1;
    int mid = 0;
    while (mid <= right)
    {
      if (nums[mid] == 0)
      {
        std::swap(nums[mid], nums[left]);
        left++;
        mid++;
      }
      else if (nums[mid] == 1)
      {
        mid++;
      }
      else
      {
        std::swap(nums[right], nums[mid]);
        right--;
      }
    }
    for (int i : nums)
    {
      cout << i << " ";
    }
  }
};
