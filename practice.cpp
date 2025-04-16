#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<vector<int>> vec = {
      {1, 2, 3},
      {4, 5, 6}};

  int rows = vec.size();
  int cols = vec[0].size(); // Assuming all rows have same number of columns

  cout << "Rows: " << rows << ", Columns: " << cols << endl;

  return 0;
}
