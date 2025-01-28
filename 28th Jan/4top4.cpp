#include <bits/stdc++.h>
using namespace std;
void binarySort(int arr[])
{
  bool s = false;
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 10 - i - 1; j++)
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
  int arr[] = {91, 90, 89, 95, 98, 93, 78, 67, 82, 83};
  binarySort(arr);
  int sum = 0;
  for (int i = 9; i >= 6; i--)
  {
    sum += arr[i];
  }
  cout << "Average of top 4 : " << sum / 4;
  return 0;
}