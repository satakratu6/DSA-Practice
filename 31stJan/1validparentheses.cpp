#include <bits/stdc++.h>
using namespace std;
bool isValid(string s)
{
  stack<char> s1;
  for (char &c : s)
  {
    if (c == '(' || c == '{' || c == '[')
    {
      s1.push(c);
    }
    else
    {
      if (s1.empty())
        return false;
      if (
          (c == ')' && s1.top() != '(') ||
          (c == '}' && s1.top() != '{') ||
          (c == ']' && s1.top() != '['))
        return false;
      s1.pop();
    }
  }
  return s1.empty();
}
int main()
{
  string s = "({[])}";
  bool valid = isValid(s);
  if (valid == 0)
  {
    cout << "Not valid" << endl;
  }
  else
  {
    cout << "Valid" << endl;
  }
  return 0;
}