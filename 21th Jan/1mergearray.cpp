#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v1 = {1, 3, 5};
  vector<int> v2 = {2, 4, 7};
  vector<int> v;
  int i = 0, j = 0;
  while (i < 3 && j < 3)
  {
    if (v1[i] < v2[j])
    {
      v.push_back(v1[i++]);
    }
    else
    {
      v.push_back(v2[j++]);
    }
  }
  while (i < 3)
  {
    v.push_back(v1[i++]);
  }
  while (j < 3)
  {
    v.push_back(v2[j++]);
  }
  for (auto x : v)
  {
    cout << x << " ";
  }
}