// Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.
class Solution
{
public:
  vector<int> majorityElement(vector<int> &arr)
  {
    vector<int> v;
    unordered_map<int, int> m;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
      m[arr[i]]++;
    }
    for (auto x : m)
    {
      if (x.second > n / 3)
      {
        v.push_back(x.first);
      }
    }
    sort(v.begin(), v.end());
    return v;
  }
};