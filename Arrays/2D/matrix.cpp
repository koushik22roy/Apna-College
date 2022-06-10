//m*n matrix target each element should be sorte row wise and column wise
#include <iostream>
using namespace std;

int main()
{
  int n, m, target;
  cin >> n >> m >> target;
  int a[10][10];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
      cout << a[i][j] << " ";
    cout << endl;
  }
  //
  int row = 0, col = m - 1;
  bool flag = false;
  while (row < n && col >= 0)
  {
    if (a[row][col] == target)
    {
      flag = true;
    }
    else if (a[row][col] > target)
    {
      col--;
    }
    else
    {
      row++;
    }
  }
  if (flag)
  {
    cout << "Element found";
  }
  else
  {
    cout << "Elment not found";
  }
  return 0;
}