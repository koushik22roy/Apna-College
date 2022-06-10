//max still i
/*
              1  0 5 4 6 8 
max still i   1  1 5 5 6 8
              non decreasing
*/
#include <iostream>
using namespace std;

int main()
{
  int mx = -1;
  int n;
  cin >> n;
  int a[20];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++)
  {
    mx = max(mx, a[i]);
    cout << mx << endl;
  }
  return 0;
}