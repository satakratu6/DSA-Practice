// To find the smaller number greater than the given number and have the same digit of the given number
#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long n;

  cout << "Enter the number: ";
  cin >> n;

  vector<int> digits;

  while (n > 0)
  {
    digits.push_back(n % 10);
    n /= 10;
  }

  reverse(digits.begin(), digits.end());
  int pivot = -1;
  for (int i = digits.size() - 2; i >= 0; i--)
  {
    if (digits[i] < digits[i + 1])
    {
      pivot = i;
      break;
    }
  }

  if (pivot == -1)
  {
    cout << "No greater number possible using the same digits." << endl;
    return 0;
  }

  int swapIndex = -1;
  for (int i = digits.size() - 1; i > pivot; i--)
  {
    if (digits[i] > digits[pivot])
    {
      swapIndex = i;
      break;
    }
  }

  swap(digits[pivot], digits[swapIndex]);

  for (int i = pivot + 1; i < digits.size(); i++)
  {
    for (int j = pivot + 1; j < digits.size() - 1; j++)
    {
      if (digits[j] > digits[j + 1])
      {
        swap(digits[j], digits[j + 1]);
      }
    }
  }

  cout << "Next greater number: ";
  for (int digit : digits)
  {
    cout << digit;
  }
  cout << endl;

  return 0;
}
