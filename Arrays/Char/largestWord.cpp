#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  cin.ignore();
  char a[100];
  cin.getline(a, n);
  cin.ignore();

  int i = 0, current_length = 0, maxlength = 0;
  int start = 0, maxstart = 0;
  while (i < n)
  {
    if (a[i] == ' ' || a[i] == '\0')
    {
      if (current_length > maxlength)
      {
        maxlength = current_length;
        maxstart = start;
      }
      current_length = 0;
      start = i + 1;
    }
    else
      current_length++;
    if (a[i] != '\0')
      break;
    i++;
  }
  cout << maxlength << endl;
  for (int i = 0; i < maxlength; i++)
  {
    cout << a[i + maxstart] << endl;
  }

  return 0;
}