#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v = {1, 2, 3, 4, 6, 6, 8, 8, 11, 23};
  int n = v.size();
  unordered_map<int, int> m;
  vector<int> d;
  for (int i = 0; i < n; i++)
  {
    m[v[i]]++;
  }
  for (auto x : m)
  {
    if (x.second > 1)
    {
      d.push_back(x.first);
    }
  }
  for (auto x : d)
  {
    cout << x << " ";
  }
  return 0;
}