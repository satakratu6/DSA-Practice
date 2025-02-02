#include <bits/stdc++.h>
using namespace std;
int main()
{
  queue<int> q;
  q.push(5);
  q.push(2);
  q.push(3);
  q.push(6);
  q.pop();
  cout << q.front() << endl;
  cout << "Size: " << q.size() << endl;
  cout << "Element at back: " << q.back() << endl;
}