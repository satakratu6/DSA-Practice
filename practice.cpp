#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr1, int s, int mid, int e)
{
  vector<int> arr;
  int i = s, j = mid + 1;
  while (i <= mid && j <= e)
  {
    if (arr1[i] < arr1[j])
    {
      arr.push_back(arr1[i]);
      i++;
    }
    else
    {
      arr.push_back(arr1[j]);
      j++;
    }
  }
  while (i <= mid)
  {
    arr.push_back(arr1[i]);
    i++;
  }
  while (j <= e)
  {
    arr.push_back(arr1[j]);
    j++;
  }
  for (int k = 0; k < arr.size(); k++)
  {
    arr1[s + k] = arr[k];
  }

  vector<int> array;
}
void mergeSort(vector<int> &v, int s, int e)
{
  if (s >= e)
  {
    return;
  };
  int mid = s + (e - s) / 2;
  mergeSort(v, s, mid);
  mergeSort(v, mid + 1, e);
}
int main()
{
  vector<int> v1 = {1, 3, 5, 7, 9};
  vector<int> v2 = {2, 4, 6, 8, 10};
  vector<int> v = merger(v1, v2);
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  return 0;
}