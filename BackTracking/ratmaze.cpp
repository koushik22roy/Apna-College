#include <iostream>
using namespace std;

bool safe(int **arr, int x, int y, int n)
{
  if (x < n && y < n && arr[x][y] == 1)
  {
    return true;
  }
  return false;
}

bool ratmaze(int **arr, int x, int y, int n, int **soarr)
{
  if ((x == (n - 1)) && (y == (n - 1)))
  {
    soarr[x][y] = 1;
    return true;
  }
  if (safe(arr, x, y, n))
  {
    soarr[x][y] = 1;
    if (ratmaze(arr, x + 1, y, n, soarr))
    {
      return true;
    }
    if (ratmaze(arr, x, y + 1, n, soarr))
    {
      return true;
    }
    soarr[x][y] = 0; //backtracking
    return false;
  }
  return true;
}

int main()
{
  int n;
  cin >> n;
  int **arr = new int *[n];
  for (int i = 0; i < n; i++)
  {
    arr[i] = new int[n];
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> arr[i][j];
    }
  }
  int **soarr = new int *[n];
  for (int i = 0; i < n; i++)
  {
    soarr[i] = new int[n];
    for (int j = 0; j < n; j++)
    {
      soarr[i][j] = 0;
    }
  }

  if (ratmaze(arr, 0, 0, n, soarr))
  {
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cout << soarr[i][j];
      }
    }
  }
  return 0;
}