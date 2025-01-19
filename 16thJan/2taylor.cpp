#include <iostream>
// formula for taylor: 1+x^1/1!+x^2/2!+x^3/3!+.....
using namespace std;
double en(int x, int n)
{
  static double p = 1, f = 1;
  double r;
  if (n == 0)
  {
    return 1;
  }
  r = en(x, n - 1);
  p = p * x;
  f = f * n;
  return r + p / f;
}
int main()
{
  cout << en(4, 3);
  return 0;
}