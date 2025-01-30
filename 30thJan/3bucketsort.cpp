#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
  vector<float> arr = {0.23, 0.21, 0.8, 0.42, 0.01};
  int n = 5;
  vector<vector<float>> b(n);
  for (int i = 0; i < n; i++)
  {
    int bi = n * arr[i];
    b[bi].push_back(arr[i]);
  }
  for (int i = 0; i < n; i++)
  {
    sort(b[i].begin(), b[i].end());
  }
  int index = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < b[i].size(); j++)
    {
      arr[index++] = b[i][j];
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}
