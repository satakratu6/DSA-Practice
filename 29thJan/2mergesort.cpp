#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end)
{
  vector<int> arr1;
  int i = start, j = mid + 1;
  while (i <= mid && j <= end)
  {
    if (arr[i] < arr[j])
    {
      arr1.push_back(arr[i]);
      i++;
    }
    else
    {
      arr1.push_back(arr[j]);
      j++;
    }
  }
  while (i <= mid)
  {
    arr1.push_back(arr[i]);
    i++;
  }
  while (j <= end)
  {
    arr1.push_back(arr[j]);
    j++;
  }
  for (int k = start; k <= end; k++)
  {
    arr[k] = arr1[k - start];
  }
  // for (int k = 0; k < temp.size(); k++)
  // {
  //   arr[left + k] = temp[k];
  // }
}
void mergeSort(vector<int> &arr, int start, int end)
{
  if (start >= end)
    return;
  int mid = start + (end - start) / 2;
  mergeSort(arr, start, mid);
  mergeSort(arr, mid + 1, end);
  merge(arr, start, mid, end);
}
// initial call from main >>0, n-1
// params vector, s,e
// base case->start>=E (terminate)
//
int main()
{
  vector<int> v1 = {1, 3, 7, 8, 9, 2, 4, 7, 9, 10};
  // vector<int> v2 = {2, 4, 7, 9, 10};
  mergeSort(v1, 0, v1.size() - 1);

  for (int i = 0; i < v1.size(); i++)
  {
    cout << v1[i] << " ";
  }
}