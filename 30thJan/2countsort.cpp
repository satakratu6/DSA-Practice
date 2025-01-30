#include <bits/stdc++.h>
using namespace std;
void countSort(vector<int> &arr)
{
  int m = arr.size();
  vector<int> count(m + 1, 0);
  for (int n : arr)
  {
    count[n]++;
  }
  int index = 0;
  for (int i = 0; i < m; i++)
  {
    while (count[i]--)
    {
      arr[index++] = i;
    }
  }
}
int main()
{
  vector<int> r = {0, 1, 2, 1, 6, 6, 1, 5, 3, 7};
  countSort(r);
  for (int i = 0; i < r.size(); i++)
  {
    cout << r[i] << " ";
  }
  return 0;
}