#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[] = {3, 4, 7, 8, 9};
  for (int i = 0; i < 5; i++)
  {
    for (int j = i + 1; j < 5; j++)
    {
      if (arr[j] == 2 * arr[i])
      {
        cout << arr[i] << " " << arr[j] << endl;
      }
    }
  }
  return 0;
}