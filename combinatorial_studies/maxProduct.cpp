#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int> &arr)
{
  int n = arr.size();
  if (n == 0)
    return 0; // Edge case: empty array

  int maxPro = arr[0], minPro = arr[0], result = arr[0];

  for (int i = 1; i < n; i++)
  {
    if (arr[i] < 0)
      swap(maxPro, minPro); // Swap max & min if current element is negative

    maxPro = max(arr[i], maxPro * arr[i]); // Maximum product at current index
    minPro = min(arr[i], minPro * arr[i]); // Minimum product at current index

    result = max(result, maxPro); // Update the overall maximum product
  }
  return result;
}

int main()
{
  vector<int> arr = {6, -3, -10, 0, 2}; // Example input
  cout << "Maximum Product Subarray: " << maxProduct(arr) << endl;
  return 0;
}
