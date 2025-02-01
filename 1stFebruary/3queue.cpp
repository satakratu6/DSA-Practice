#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  Node *next;
  Node(int data) : data(data), next(nullptr) {}
};

class Queue
{
private:
  Node *front;
  Node *rear;
  int sz;

public:
  Queue() : front(nullptr), rear(nullptr), sz(0) {}

  ~Queue()
  {
    while (front)
    {
      Node *temp = front;
      front = front->next;
      delete temp;
    }
  }

  void enqueue(int val)
  {
    Node *temp = new Node(val);
    if (rear == nullptr)
    {
      front = rear = temp;
    }
    else
    {
      rear->next = temp;
      rear = temp;
    }
    sz++;
  }

  void dequeue()
  {
    if (front == nullptr)
    {
      cout << "Underflow" << endl;
      return;
    }
    Node *temp = front;
    front = front->next;
    delete temp;
    sz--;

    if (front == nullptr) // If queue becomes empty
      rear = nullptr;
  }

  int peek()
  {
    return (front == nullptr) ? -1 : front->data;
  }

  int getSize()
  {
    return sz;
  }

  bool isEmpty()
  {
    return front == nullptr;
  }
};

int main()
{
  Queue q;

  q.enqueue(10);
  q.enqueue(20);
  q.enqueue(30);

  cout << "Front element: " << q.peek() << endl;
  cout << "Queue size: " << q.getSize() << endl;

  q.dequeue();
  cout << "Front element after dequeue: " << q.peek() << endl;
  cout << "Queue size after dequeue: " << q.getSize() << endl;

  while (!q.isEmpty())
  {
    cout << "Dequeuing: " << q.peek() << endl;
    q.dequeue();
  }

  cout << "Queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;

  return 0;
}
