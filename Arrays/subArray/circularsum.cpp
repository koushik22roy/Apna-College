#include <iostream>
#include <climits>

using namespace std;
//kadane function
int kadane(int arr[], int n)
{
  int currentsum = 0;
  int maxsum = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    currentsum += arr[i];
    if (currentsum < 0)
    {
      currentsum = 0;
    }
    maxsum = max(maxsum, currentsum);
  }
  return maxsum;
}

int main()
{
  int n;
  cin >> n;
  int arr[10];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int wrapsum, nonwrapsum, totalsum = 0;
  nonwrapsum = kadane(arr, n);
  for (int i = 0; i < n; i++)
  {
    arr[i] = -arr[i];
  }
  wrapsum = totalsum + kadane(arr, n);

  cout << max(wrapsum, nonwrapsum);
  return 0;
}