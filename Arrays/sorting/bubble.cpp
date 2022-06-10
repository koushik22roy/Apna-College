//repeatdly swap two adjacent elements if they are wrong order
#include <iostream>
using namespace std;

int main()
{
  int n, arr[20];
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int c = 1;
  while (c < n)
  {
    for (int i = 0; i < n - c; i++)
    {
      if (arr[i] > arr[i + 1])
      {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
    }
    c++;
  }
  for (int i = 0; i < c; i++)
  {
    cout << arr[i] << " " << endl;
  }
}