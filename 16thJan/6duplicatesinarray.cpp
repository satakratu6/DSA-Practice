#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v = {1, 2, 3, 4, 6, 6, 8, 8, 11, 23};
  int n = v.size();
  map<int, int> m;
  // vector<int> d;
  v = {};
  for (int i = 0; i < n; i++)
  {
    m[v[i]]++;
  }
  for (auto x : m)
  {
    // if (x.second > 1)
    // {
    //   d.push_back(x.first);
    // }
    v.push_back(x.first);
  }
  // stable_sort(d.begin(), d.end());
  for (auto x : v)
  {
    cout << x << " ";
  }
  return 0;
}