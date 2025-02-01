#include <bits/stdc++.h>
using namespace std;

class myQueue
{
  int *arr;
  int f, r, cap, sz;

public:
  myQueue(int c)
  {
    cap = c;
    sz = 0;
    f = 0;
    r = -1;
    arr = new int[c];
  }

  ~myQueue()
  {
    delete[] arr;
  }

  // Add element to the queue
  void enqueue(int x)
  {
    if (sz != cap)
    {
      r = (r + 1) % cap;
      arr[r] = x;
      sz++;
    }
    else
    {
      cout << "Queue is full, Overflow" << endl;
    }
  }

  // Remove element from the queue
  void dequeue()
  {
    if (sz != 0)
    {
      f = (f + 1) % cap;
      sz--;
    }
    else
    {
      cout << "Underflow" << endl;
    }
  }

  // Get the size of the queue
  int size()
  {
    return sz;
  }

  // Check if the queue is empty
  bool empty()
  {
    return sz == 0;
  }

  // Get the front element
  int front()
  {
    return (sz != 0) ? arr[f] : -1;
  }
};

int main()
{
  myQueue q(5);

  q.enqueue(10);
  q.enqueue(20);
  q.enqueue(30);
  q.enqueue(40);
  q.enqueue(50);

  cout << "Front element: " << q.front() << endl;
  q.dequeue();
  cout << "Front element after one dequeue: " << q.front() << endl;

  q.enqueue(60); // This should not cause overflow

  cout << "Queue size: " << q.size() << endl;
  q.enqueue(70); // This should cause an overflow

  while (!q.empty())
  {
    cout << q.front() << " ";
    q.dequeue();
  }
  cout << endl;

  return 0;
}
