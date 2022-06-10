// find prime in given range
#include <iostream>
using namespace std;

int main()
{
  int n1, n2 , flag;
  cin >> n1 >> n2;
  while (n1 < n2)
  {
    for (int i = 2; i < n1 / 2; i++)
    {
      if (n1 % i == 0)
      {
        flag = 1;
        break;
      }
      if (flag == 0)
      {
        cout << n1 << endl;
        n1++;
      }
      cout << endl;
    }
  }
  return 0;
}