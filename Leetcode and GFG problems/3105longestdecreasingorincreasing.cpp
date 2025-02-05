class Solution
{
public:
    int longestMonotonicSubarray(vector<int> &nums)
    {
        int n = nums.size(), ans = 1;
        int increment = 1, decrement = 1;

        for (int i = 1; i < n; i++)
        {
            if (nums[i] > nums[i - 1])
            {
                increment++;
                decrement = 1;
            }
            else if (nums[i] < nums[i - 1])
            {
                decrement++;
                increment = 1;
            }
            else
            {
                increment = 1;
                decrement = 1;
            }
            ans = max(ans, max(increment, decrement));
        }
        return ans;
    }
};
