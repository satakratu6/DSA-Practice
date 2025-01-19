#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//   int arr[5] = {3, 1, 5, 9, 10};
//   int n;
//   cin >> n;
//   for (int i = 0; i < 5; i++)
//   {
//     if (arr[i] == n)
//     {
//       cout << "Element found at: " << i << endl;
//     }
//   }
// }
int search(vector<int> &arr, int x)
{
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] == x)
    {
      return i;
    }
  }
  return -1;
}
int main()
{
  vector<int> arr;
  cout << "Enter the number of elements to be entered" << endl;
  int n;
  cin >> n;
  cout << "Enter elements for array: " << endl;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    arr.push_back(x);
  }
  int x;
  cout << "Enter element to search: " << endl;
  cin >> x;
  int r = search(arr, x);
  if (r == -1)
  {
    cout << "Element is not there";
  }
  else
  {
    cout << "Element is present at: " << r;
  }
}