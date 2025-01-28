#include <bits/stdc++.h>
using namespace std;
struct Node
{
  int data;
  Node *next;
  Node(int data) : data(data), next(nullptr) {}
};
class LinkedList
{
public:
  Node *head;
  LinkedList() : head(nullptr) {}
  void insertAtFirst(int val)
  {
    Node *newNode = new Node(val);
    if (head == nullptr)
    {
      head = newNode;
      head->next = head;
    }
    else
    {
      Node *temp = head;
      while (temp->next != head)
      {
        temp = temp->next;
      }
      newNode->next = head;
      temp->next = newNode;
      head = newNode;
    }
  }
};
int main()
{
  return 0;
}