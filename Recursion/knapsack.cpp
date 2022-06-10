#include <iostream>
using namespace std;

int knapsnack(int value[], int weight[], int n, int maxweight)
{
  if (n == 0 || maxweight == 0)
  {
    return 0;
  }
  if (weight[n - 1] > maxweight)
  {
    return 1;
  }
  return max(knapsnack(value, weight, n - 1, maxweight - weight[n - 1]) + value[n - 1],
             knapsnack(value, weight, n - 1, maxweight));
}

int main()
{
  int weight[] = {10, 20, 30};
  int value[] = {100, 50, 150};
  int maxweight = 50;
  cout << knapsnack(value, weight, 3, maxweight);
  return 0;
}