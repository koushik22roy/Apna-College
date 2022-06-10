//tilling problem

#include <iostream>
using namespace std;

int tilling(int n)
{
  if (n == 0)
  {
    return 0;
  }
  if (n == 1)
  {
    return 1;
  }
  //vertcal and horizontal
  return tilling(n - 1) + tilling(n - 2);
}

int main()
{
  cout<<tilling(4);
  return 0;
}