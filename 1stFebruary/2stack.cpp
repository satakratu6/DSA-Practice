#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  Node *next;
  Node(int data) : data(data), next(nullptr) {}
};

class Stack
{
private:
  Node *head;
  int sz;

public:
  Stack() : head(nullptr), sz(0) {}

  ~Stack()
  {
    while (head)
    {
      Node *temp = head;
      head = head->next;
      delete temp;
    }
  }

  void push(int ele)
  {
    // new temp (new data will be taking head)
    Node *temp = new Node(ele);
    temp->next = head;
    head = temp;
    sz++;
  }

  void pop()
  {
    if (head == nullptr)
    {
      cout << "Stack Underflow" << endl;
      return;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
    sz--;
  }

  int peek()
  {
    return (head == nullptr) ? -1 : head->data;
  }

  bool isEmpty()
  {
    return head == nullptr;
  }

  int getSize()
  {
    return sz;
  }
};

int main()
{
  Stack s;

  s.push(10);
  s.push(20);
  s.push(30);

  cout << "Top element: " << s.peek() << endl;
  cout << "Stack size: " << s.getSize() << endl;

  s.pop();
  cout << "Top element after pop: " << s.peek() << endl;
  cout << "Stack size after pop: " << s.getSize() << endl;

  while (!s.isEmpty())
  {
    cout << "Popping: " << s.peek() << endl;
    s.pop();
  }

  cout << "Stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;

  return 0;
}
