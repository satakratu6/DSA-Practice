#include <iostream>
using namespace std;
int main()
{
  int arr[10], n, ele, pos;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << "Before Insertion: " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cin >> pos >> ele;
  for (int i = n; i > pos; i--)
  {
    arr[i] = arr[i - 1];
  }
  arr[pos] = ele;
  n++;
  cout << "After insertion: " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i];
  }
  return 0;
}