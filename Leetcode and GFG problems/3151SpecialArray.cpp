// An array is considered special if every pair of its adjacent elements contains two numbers with different parity.

// You are given an array of integers nums. Return true if nums is a special array, otherwise, return false.
class Solution
{
public:
    bool isArraySpecial(vector<int> &arr)
    {
        for (int i = 0; i < arr.size() - 1; i++)
        {
            if (arr[i] % 2 == arr[i + 1] % 2)
            {
                return false;
            }
        }
        return true;
    }
};