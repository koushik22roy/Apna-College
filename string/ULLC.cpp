#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{

  // //STL
  // string str = "Hello";
  // sort(str.begin(), str.end());
  // transform(str.begin(), str.end(), str.begin(), ::toupper);
  // cout << "Upper :" << str << endl;
  // transform(str.begin(), str.end(), str.begin(), ::tolower);
  // cout << "Lower :" << str << endl;

  string str = "kosuhik";
  for (int i = 0; i < str.size(); i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z')
      str[i] -= 32;
  }
  cout << str << endl;
}