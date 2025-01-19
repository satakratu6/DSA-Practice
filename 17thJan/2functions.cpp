// function overloading
#include <iostream>
using namespace std;
int max(int a1, int a2)
{
  return (a1 > a2) ? a1 : a2;
}
int max(int a, int b, int c)
{
  return (a > b) ? (a > c ? a : c) : (b > c ? b : c);
}
int main()
{
  cout << max(5, 10) << endl;
  cout << max(5, 6, 1);
  return 0;
}
