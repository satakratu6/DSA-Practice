// #include <bits/stdc++.h>
// using namespace std;
// int fibonacci_bottomUp(int n)
// {
//   vector<int> dp = vector<int>(n, 0);
//   dp[0] = 0;
//   dp[1] = 1;
//   for (int i = 2; i < n; i++)
//   {
//     dp[i] = dp[i - 1] + dp[i - 2];
//   }
//   return dp[n];
// }
// int fibonacci_1space(int n)
// {
//   if (n <= 1)
//     return n;
//   int prev1 = 0;
//   int prev2 = 1;
//   int ans;
//   for (int i = 2; i <= n; i++)
//   {
//     ans = prev2 + prev1;
//     prev2 = prev1;
//     prev1 = ans;
//   }
//   return ans;
// }
// int main()
// {
//   cout << fibonacci_1space(5);
//   return 0;
// }
// using memorization
// #include <bits/stdc++.h>
// using namespace std;
// int f(int n, vector<int> &dp)
// {
//   if (n <= 1)
//     return n;
//   if (dp[n] != -1)
//     return dp[n];
//   return dp[n] = f(n - 1, dp) + f(n - 2, dp);
// }
// int main()
// {
//   int n;
//   cin >> n;
//   vector<int> dp(n + 1, -1);
//   cout << f(n, dp);
//   return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int prev = 1;
  int prev2 = 0;
  for (int i = 2; i <= n; i++)
  {
    int curi = prev + prev2;
    prev2 = prev;
    prev = curi;
  }
  cout << prev;
}