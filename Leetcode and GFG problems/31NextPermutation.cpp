class Solution
{
public:
    void nextPermutation(vector<int> &arr)
    {
        int pivot = -1;
        int n = arr.size();
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] < arr[i + 1])
            {
                pivot = i;
                break;
            }
        }
        if (pivot == -1)
        {
            reverse(arr.begin(), arr.end());
        }
        for (int i = n - 1; i > pivot; i--)
        {
            if (arr[i] > arr[pivot])
            {
                swap(arr[i], arr[pivot]);
                break;
            }
        }
        reverse(arr.begin() + pivot + 1, arr.end());
    }
};