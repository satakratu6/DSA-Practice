#include <bits/stdc++.h>
using namespace std;

int main()
{
  int arr[10] = {4, 11, 6, 2, 16, 5, 7, 17, 9};
  int n = sizeof(arr) / sizeof(arr[0]);
  int sum = 0;
  int maxsum = INT_MIN;
  int k;
  cin >> k;
  // for (int i = 0; i <= n - k; i++)
  // {
  //   int sum = 0;
  //   for (int j = i; j < i + k; j++)
  //   {
  //     sum += arr[j];
  //   }
  //   maxsum = max(maxsum, sum);
  // }
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
    if (i >= k)
    {
      sum -= arr[i - k];
    }
    maxsum = max(maxsum, sum);
  }
  cout << "Maximum sum of subarrays of size 3: " << maxsum << endl;

  return 0;
}
