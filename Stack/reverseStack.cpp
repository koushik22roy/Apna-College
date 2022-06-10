#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &st, int elem)
{
  if (st.empty())
  {
    st.push(elem);
    return;
  }

  int topelem = st.top();
  st.pop();
  insertAtBottom(st, elem);

  st.push(topelem);
}

void reverse(stack<int> &st)
{
  if (st.empty())
  {
    return;
  }

  int elem = st.top();  
  st.pop();
  reverse(st);
  insertAtBottom(st, elem);
}

int main()
{
  stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);

  while (!st.empty())
  {
    cout<<st.top()<<endl;
    st.pop();
  }
  cout<<"revers";
  reverse(st);
  // while (!st.empty())
  // {
  //   cout<<st.top()<<endl;
  //   st.pop();
  // }

}