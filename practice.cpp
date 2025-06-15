#include <bits/stdc++.h>
using namespace std;
vector<int> merge(vector<int> &v1, vector<int> &v2)
{
  int n1 = v1.size();
  int n2 = v2.size();
  int i = 0, j = 0;
  vector<int> v;
  while (i < n1 && j < n2)
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
  while (i < n1)
  {
    v.push_back(v1[i++]);
  }
  while (j < n2)
  {
    v.push_back(v2[j++]);
  }
  return v;
}
int main()
{
  vector<int> v1 = {3, 1, 5, 8, 10};
  vector<int> v2 = {8, 2, 12, 6, 7, 4};
  vector<int> v;
  v = merge(v1, v2);
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
}