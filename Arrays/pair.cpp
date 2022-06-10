// #include <iostream>
// #include <vector>
#include <bits/stdc++.h>
using namespace std;

bool myCompare(pair<int, int> p1, pair<int, int> p2)
{
  return p1.first < p2.first;
}

int main()
{
  // pair<int, float> p;
  // p.first = 10;
  // p.second = 20.4;

  int arr[] = {10, 16, 7, 14, 5, 3, 12, 9};
  vector<pair<int, int>> v1;

  for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
  {
    v1.push_back(make_pair(arr[i], i));
  }
  sort(v1.begin(), v1.end(), myCompare);

  for (int i = 0; i < v1.size(); i++)
  {
    arr[v1[i].second] = 0;
  } 
  for (int i = 0; i < v1.size(); i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}