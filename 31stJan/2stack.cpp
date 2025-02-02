#include <bits/stdc++.h>
// using array
using namespace std;

class myStack
{
private:
  int *arr;
  int cap;
  int top;

public:
  myStack(int size)
  {
    cap = size;
    arr = new int[cap];
    top = -1;
  }

  void push(int val)
  {
    if (top == cap - 1)
    {
      cout << "Stack is full" << endl;
      return;
    }
    top++;
    arr[top] = val;
  }

  int peek()
  {
    if (top == -1)
    {
      cout << "Stack is empty" << endl;
      return -1;
    }
    return arr[top];
  }

  bool empty()
  {
    return top == -1;
  }

  void pop()
  {
    if (top == -1)
    {
      cout << "Stack underflow" << endl;
      return;
    }
    top--;
  }

  ~myStack()
  {
    delete[] arr;
  }
};

int main()
{
  myStack m(5);
  m.push(7);
  m.push(5);
  m.push(1);
  cout << "Top element: " << m.peek() << endl;
  m.pop();
  cout << "Top element after pop: " << m.peek() << endl;
  return 0;
}
