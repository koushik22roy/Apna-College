/* 
{-1,4,7,2}
all possible sub arrays
time complexity 
*/
#include <iostream>
#include <climits>
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
  int maxSum = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      int sum = 0;
      for (int k = i; k <= j; k++)
      {
        sum += arr[k];
        // cout << arr[k] << " ";
      }
      // cout << endl;
      maxSum = max(maxSum, sum);
    }
  }
  cout << maxSum << " ";
  return 0;
}