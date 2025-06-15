#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//   int arr1[] = {1, 3, 7, 8, 9};
//   int arr2[] = {2, 4, 7, 9, 10};
//   int n = sizeof(arr1) / sizeof(arr1[0]);
//   int m = sizeof(arr2) / sizeof(arr2[0]);
//   int arr3[n + m];
//   int i = 0, j = 0, k = 0;
//   while (i < n && j < m)
//   {
//     if (arr1[i] < arr2[j])
//     {
//       arr3[k++] = arr1[i++];
//     }
//     else
//     {
//       arr3[k++] = arr2[j++];
//     }
//   }
//   while (i < n)
//   {
//     arr3[k++] = arr1[i++];
//   }
//   while (j < n)
//   {
//     arr3[k++] = arr2[j++];
//   }
//   for (int i = 0; i < n + m; i++)
//   {
//     cout << arr3[i] << " ";
//   }
// }
vector<int> merge(vector<int> v1, vector<int> v2)
{
  int n1 = v1.size();
  int n2 = v2.size();
  int i = 0, j = 0;
  vector<int> v;
  while (i < n1 && j < n2)
  {
    if (v1[i] < v2[j])
    {
      v.push_back(v1[i]);
      i++;
    }
    else
    {
      v.push_back(v2[j]);
      j++;
    }
  }
  while (i < n1)
  {
    v.push_back(v1[i]);
    i++;
  }
  while (j < n1)
  {
    v.push_back(v2[j]);
    j++;
  }
  return v;
}

// initial call from main >>0, n-1
// params vector, s,e
// base case->start>=E (terminate)
//
int main()
{
  vector<int> v1 = {1, 3, 7, 8, 9};
  vector<int> v2 = {2, 4, 7, 9, 10};
  vector<int> v;
  v = merge(v1, v2);
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
}