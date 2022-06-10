//form big number from numeric string
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
  string str = "77888532";
  sort(str.begin(), str.end(), greater<int>());
  cout << str << endl;
  return 0;
}