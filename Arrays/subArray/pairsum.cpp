//pair sumproblem
#include <iostream>
using namespace std;

bool pairsum(int arr[], int n, int k)
{
  int low = 0;
  int high = n - 1;
  while (low < high)
  {
    if (arr[low] + arr[high] == k)
    {
      cout << low << " " << high;
      return true;
    }
    else if (arr[low] + arr[high] > k)
    {
      high++;
    }
    else
    {
      low++;
    }
  }
  return false;
}
int main()
{
  int n, k;
  cin >> n >> k;
  int arr[10];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << pairsum(arr, n, k) << endl;
  return 0;
}