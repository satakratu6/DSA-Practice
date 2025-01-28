// Find the second largest distinct element in an array. If not found then return -1
#include <bits/stdc++.h>
using namespace std;
int getMax(vector<int> &arr)
{
  int n = arr.size();
  int max1 = arr[0];
  int max2 = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > max1)
    {
      max2 = max1;
      max1 = arr[i];
    }
    else if (arr[i] > max2 && arr[i] != max1)
    {
      max2 = arr[i];
    }
  }
  if (max2 == INT_MIN)
  {
    return -1;
  }
  return max2;
}
int main()
{
  vector<int> v = {3, 3, 1};
  cout << getMax(v);
  return 0;
}