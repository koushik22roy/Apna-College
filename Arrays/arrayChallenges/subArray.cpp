//sum of subarray[]
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int arr[20];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int curr_sum_arr = 0;
  for (int i = 0; i < n; i++)
  {
    curr_sum_arr = 0; 
    for (int j = i; j < n; j++)
    {
      curr_sum_arr += arr[j];
      cout << curr_sum_arr << " " << endl;
    }
  }
  return 0;
}