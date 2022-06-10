#include <iostream>
using namespace std;

#define n 100

class stack
{
private:
  int *arr, top;

public:
  stack()
  {
    arr = new int[n];
    top = -1;
  }
  void Push(int x)
  {
    if (top == n-1)
    {
      cout << "StackOverflow";
      return;
    }
    top++;
    arr[top] = x;
  }
  void Pop()
  {
    if (top == -1)
    {
      cout << "No element to Pop";
      return;
    }
    top--;
  }
  int Top()
  {
    if (top == -1)
    {
      cout << "No element in stock";
      return -1;
    }
    return arr[top];
  }
  bool empty()
  {
    return top == -1;
  }
};

int main()
{
  stack st;
  st.Push(30);
  st.Push(10);
  st.Push(20);
  st.Push(60);
  st.Push(70);
  st.Push(80);
  st.Push(90);
  cout<<st.Top()<<endl;
  st.Pop();
  cout<<st.Top()<<endl;
  //cout<<st.Pop()<<endl;
  return 0;
}