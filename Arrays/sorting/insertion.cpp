//inserting an element from unsorted array to its correct position i sorted array

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
  for (int i = 1; i < n; i++)
  {
    int current_value = arr[i];
    int j = i - 1;
    while (arr[j] > current_value && j >=0) 
    {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = current_value;
  }
  for (int i = 1; i <= n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}