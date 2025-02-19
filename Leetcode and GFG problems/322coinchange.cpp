int coinChange(int amount, vector<int> &coins)
{
  if (amount == 0)
  {
    return 0;
  }
  if (dp[amount] != -1)
    return dp[amount];
  int mini = INT_max;
  for (int i = 0; i < coins.size(); i++)
  {
    if (amount - coins[i] >= 0)
    {
      mini = Min(coinChange(amount - coins[i], coins));
    }
    dp[amount] = mini + 1;
  }
  return mini + 1;
}