#include <bits/stdc++.h>
using namespace std;
// int main()
// {
//   int arr[] = {3, 5, 7, 8, 9};
//   pair<int, int> p;
//   vector<pair<int, int>> ps;
//   for (int i = 0; i < 5; i++)
//   {
//     for (int j = i + 1; j < 5; j++)
//     {
//       p.first = arr[i];
//       p.second = arr[j];
//       ps.push_back(p);
//     }
//   }
//   for (auto x : ps)
//   {
//     cout << x.first << " " << x.second << endl;
//   }
//   return 0;
// }
int main()
{
  int arr[] = {3, 5, 7, 8, 9};
  int count = 0;
  for (int i = 0; i < 5; i++)
  {
    for (int j = i + 1; j < 5; j++)
    {
      cout << arr[i] << " " << arr[j] << endl;
    }
  }
}