#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  Node *next;
  Node(int value) : data(value), next(nullptr) {}
};

int findMiddle(Node *head)
{
  if (head == nullptr)
    return -1; // Return -1 if the list is empty
  Node *slow = head;
  Node *fast = head;
  while (fast != nullptr && fast->next != nullptr)
  {
    slow = slow->next;
    fast = fast->next->next;
  }
  return slow->data;
}

int main()
{
  Node *head = new Node(1);
  head->next = new Node(2);
  head->next->next = new Node(3);
  head->next->next->next = new Node(4);
  head->next->next->next->next = new Node(5);

  int middleValue = findMiddle(head);
  if (middleValue != -1)
  {
    cout << "The middle element is: " << middleValue << endl;
  }
  else
  {
    cout << "The list is empty." << endl;
  }

  return 0;
}
