//smallest positive number
#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[10];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  const int N = 1e6 + 2;
  bool check[N];

  for (int i = 0; i < n; i++)
  {
    check[i] = false; 
  }

  for (int i = 0; i < n; i++)
  {
    if (a[i] >= 0)
    {
      check[a[i]] = true;
    }
  }

  int ans = -1;
  for (int i = 0; i < N; i++)
  {
    if (check[i] == 0)
    {
      ans = i;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}