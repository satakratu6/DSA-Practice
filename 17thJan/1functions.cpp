#include <iostream>
using namespace std;
// int add(int a, int b)
// {
//   return a + b;
// }
// int multi(int a, int b)
// {
//   return a * b;
// }
// int main()
// {
//   cout << add(5, 5) << endl;
//   cout << multi(5, 5);
//   return 0;
// }
// pass by reference
// void modify(int &x)
// {
//   x = x + 5;
//   cout << "Inside function: " << x << endl;
// }
// int main()
// {
//   int n = 10;
//   modify(n);
//   cout << "Outside function: " << n << endl;
// }
// swapping
// void swap(int &a, int &b)
// {
//   int temp;
//   temp = a;
//   a = b;
//   b = temp;
//   cout << a << " " << b;
// }
// int main()
// {
//   int a = 5;
//   int b = 10;
//   swap(a, b);

//   return 0;
// }
// pass by pointer
// void swap(int *a, int *b)
// {
//   int temp;
//   temp = *a;
//   *a = *b;
//   *b = temp;
// }
// int main()
// {
//   int a = 5;
//   int b = 10;
//   swap(a, b);
//   cout << a << " " << b;

//   return 0;
// }
// swapping without third variable
// void swap(int &a, int &b)
// {
//   // a = a ^ b;
//   // b = a ^ b;
//   // a = a ^ b;
//   a = a + b;
//   b = a - b;
//   a = a - b;
// }
// int main()
// {
//   int a = 5, b = 10;
//   swap(a, b);
//   cout << a << " " << b;
// }
// inline function
inline int sqaure(int x)
{
  return x * x;
}
int main()
{
  cout << sqaure(5);
  return 0;
}