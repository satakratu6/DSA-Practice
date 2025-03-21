class Solution
{
public:
  vector<int> dailyTemperatures(vector<int> &temperatures)
  {
    stack<int> stk;
    int n = temperatures.size();
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++)
    {
      while (!stk.empty() && temperatures[i] > temperatures[stk.top()])
      {
        int index = stk.top();
        stk.pop();
        v[index] = i - index;
      }
      stk.push(i);
    }
    return v;
  }
};