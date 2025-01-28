#include <bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int x)
{
  for (int i = 0; i < x - 1; i++)
  {
    // ith element to last element (n-1)
    int min = i;
    // mini -> arr[min];
    for (int j = i + 1; j < x; j++)
    {
      if (arr[min] > arr[j])
      {
        min = j;
      }
    }
    swap(arr[min], arr[i]);
    // i arrow member
    //  min circle
  }
}
void printArr(int arr[], int x)
{
  for (int i = 0; i < x; i++)
  {
    cout << arr[i] << " ";
  }
}
int main()
{
  int arr[] = {5, 2, 1, 3, 4};
  int sz = sizeof(arr) / sizeof(arr[0]);
  selectionSort(arr, sz);
  printArr(arr, sz);
  return 0;
}