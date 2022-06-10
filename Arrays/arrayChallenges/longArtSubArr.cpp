//longest arithmetic sub array
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int arr[10];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int ans = 2;
  int pdiff = arr[0] - arr[1];
  int j = 2;
  int curr = 2;

  while (j < n)
  {
    if (pdiff == arr[j] - arr[j - 1])
    {
      curr++;
    }
    else
    {
      pdiff = arr[j] - arr[j - 1];
      curr = 2;
    }
    ans = max(ans, curr);
    j++;
  }
  cout << ans << endl;

  return 0;
}