#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int partitionByHoareMethod(vector<int> &arr, int s, int r)
{
  int p = arr[s];
  int left = s - 1;
  int right = r + 1;
  while (true)
  {
    while (arr[++left] < p)
      ;
    while (arr[--right] > p)
      ;

    if (left >= right)
    {
      return right;
    }

    swap(arr[left], arr[right]);
  }
}

void quicksort(vector<int> &arr, int s, int e)
{
  if (e <= s)
    return;
  int p = partitionByHoareMethod(arr, s, e);
  quicksort(arr, s, p);
  quicksort(arr, p + 1, e);
}

int main()
{
  vector<int> arr = {10, 7, 8, 9, 1, 5};
  int n = arr.size();
  quicksort(arr, 0, n - 1);
  cout << "Sorted array: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
      return 0;
}
