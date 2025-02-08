#include <bits/stdc++.h>
using namespace std;
int main()
{
  deque<int> d;
  // d.push_front(4);
  // d.push_back(67);
  // d.push_front(78);
  // d.pop_back();
  // d.pop_back();
  // cout << d.back();
  for (int i = 1; i <= 8; i++)
  {
    d.push_front(i);
  }
  for (int i = 1; i <= 4; i++)
  {
    d.pop_back();
  }
  for (int i = 1; i <= 3; i++)
  {
    d.pop_front();
  }
  cout << d.front();
}
