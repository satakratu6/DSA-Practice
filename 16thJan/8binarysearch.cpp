#include <bits/stdc++.h>
using namespace std;
// int search(int arr[], int low, int high, int ele)
// {
//   while (low <= high)
//   {
//     int mid = low + (high - low) / 2;

//     if (arr[mid] == ele)
//       return mid;
//     if (arr[mid] < ele)
//       low = mid + 1;
//     else
//       high = mid - 1;
//   }
//   return -1;
// }
// int main()
// {
//   int arr[5] = {1, 5, 7, 8, 9};
//   int ele;
//   int r = search(arr, 0, 4, 7);
//   if (r == -1)
//   {
//     cout << "Element didn't found" << endl;
//   }
//   else
//   {
//     cout << "Element found at at : " << r;
//   }
//   cin >> ele;
// }
// using recursions
int search(int arr[], int low, int high, int e)
{
  if (high >= low)
  {
    int mid = low + (high - low) / 2;
    if (arr[mid] == e)
    {
      return mid;
    }
    if (arr[mid] > e)
    {
      return search(arr, low, mid - 1, e);
    }
    else
    {
      return search(arr, mid + 1, high, e);
    }
  }
  return -1;
}
int main()
{
  int arr[6] = {1, 3, 5, 7, 8, 10};
  int r = search(arr, 0, 5, 8);
  if (r == -1)
  {
    cout << "Not found";
  }
  else
  {
    cout << "Found at: " << r;
  }
}