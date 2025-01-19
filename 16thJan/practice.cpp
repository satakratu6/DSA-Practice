#include <iostream>
using namespace std;
//// int sum(n)
//// {
////   if (n == 0)
////   {
////     return 0;
////   }
////   else
////   {
////     return sum(n - 1) + n;
////   }
//// }
// int power(int m, int n)
//{
//   if (n == 0)
//   {
//     return 1;
//   }
//   return power(m, n - 1) * m;
// }
// int main()
//{
//   // int r = 5;
//   // // sum(5);
//   // int sum = 0;
//   // for (int i = 1; i <= 5; i++)
//   // {
//   //   sum += i;
//   // }
//   // cout << sum;
//   int m = 5;
//   int n = 2;
//   cout<<power(m, n);
//
// }
// Taylor Series
// double e(int x,int n){
//	static double p=1,f=1;
//	double r;
//	if(n==0){
//		return 1;
//	}
//	r=e(x,n-1);
//	p=p*x;
//	f=f*n;
//	return r+p/f;
// }
// int main(){
//	cout<<e(4,15);
// }
// fibonacci series
// int fibonacci(int n){
//	if(n<=1){
//		return 1;
//	}
//	return fibonacci(n-1)+fibonacci(n-2);
// }
// int main(){
//	cout<<fibonacci(5);
// }
// ncr problem
int fact(int n)
{
  if (n == 0)
  {
    return 1;
  }
  return fact(n - 1) * n;
}
int ncr(int n, int r)
{
  int num, den;
  num = fact(n);
  den = fact(r) * fact(n - r);
  return num / den;
}
int NCR(int n, int r)
{
  if (n == r || r == 0)
  {
    return 1;
  }
  return NCR(n - 1, r - 1) + NCR(n - 1, r);
}
int main()
{
  cout << ncr(5, 2);
}
