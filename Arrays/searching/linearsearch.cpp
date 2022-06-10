#include <iostream>
using namespace std;

int linearsearch(int arr[], int n, int key)
{
  //time complexity O(n)
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == key)
    {
      return 1; 
    }
    return -1;
  }
}
 
int main()
{
  int n;
  cin >> n;
  int arr[20];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int key;
  cin >> key;
  cout << linearsearch(arr, n, key);
  return 0;
}