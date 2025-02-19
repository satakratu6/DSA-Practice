class Solution
{
public:
  vector<int> spiralOrder(vector<vector<int>> &matrix)
  {

    vector<int> v;
    int n = matrix.size();
    int m = matrix[0].size();
    int top = 0, left = 0, down = n - 1, right = m - 1;

    while (v.size() < n * m)
    {
      for (int i = left; i <= right; i++)
        v.push_back(matrix[top][i]);
      top++;

      for (int i = top; i <= down; i++)
        v.push_back(matrix[i][right]);
      right--;

      if (top <= down)
      {
        for (int i = right; i >= left; i--)
          v.push_back(matrix[down][i]);
        down--;
      }

      if (left <= right)
      {
        for (int i = down; i >= top; i--)
          v.push_back(matrix[i][left]);
        left++;
      }
    }
    return v;
  }
};
