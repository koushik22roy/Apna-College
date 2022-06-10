#include <iostream>
#include <vector>
using namespace std;
int main()
{
  // vector<int> v;
  // v.push_back(2);
  // v.push_back(10);
  // for (int i = 0; i < v.size(); i++)
  // {
  //   cout << v[i] << endl;
  // }

  // vector<int>::iterator it;
  // for (it = v.begin(); it != v.end(); it++)
  // {
  //   cout << *it << endl;
  // }

  // for (auto i : v)
  // {
  //   cout << i << endl;
  // }

  // v.pop_back();

  vector<int> v2(4, 50);
  for (auto i : v2)
  {
    cout << i << endl;
  }

  return 0;
}