#include <bits/stdc++.h>
using namespace std;
void binarySort(int arr[])
{
  bool s = false;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5 - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
        s = true;
      }
    }
    if (s == false)
    {
      break;
    }
  }
}
int main()
{
  int arr[] = {7, 3, 5, 2, 1};
  binarySort(arr);
  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}