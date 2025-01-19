#include <iostream>
using namespace std;
int main()
{
  int arr[5] = {5, 1, 4, 9, 3};
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5 - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << " ";
  }
}