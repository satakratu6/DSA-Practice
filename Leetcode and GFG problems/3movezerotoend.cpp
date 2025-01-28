// ou are given an array arr[] of non-negative integers. Your task is to move all the zeros in the array to the right end while maintaining the relative order of the non-zero elements. The operation must be performed in place, meaning you should not use extra space for another array.
#include <bits/stdc++.h>
using namespace std;
void moveZero(vector<int> &arr)
{
  int n = arr.size();
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] != 0)
    {
      swap(arr[i], arr[count]);
      count++;
    }
  }
}
int main()
{
  vector<int> v = {3, 0, 4, 5, 0, 3, 0};
  int n = v.size();
  moveZero(v);
  for (int i = 0; i < n; i++)
  {
    cout << v[i] << " ";
  }
  return 0;
}