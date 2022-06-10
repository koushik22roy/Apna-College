//tower of hanoi
#include <iostream>
using namespace std;

void towerhanoi(int n, char src, char dest, char helper)
{
  if (n == 0)
  {
    return;
  }
  towerhanoi(n - 1, src, helper, dest);
  cout << "Move from" << src << " to" << dest << endl;
  towerhanoi(n - 1, helper, dest, src);
}
int main()
{
  towerhanoi(3, 'A', 'C', 'B');
  return 0;
}