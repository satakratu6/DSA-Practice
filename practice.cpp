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
  ~LinkedList()
  {
    Node *current = head;
    while (current != head)
    {
      Node *nextNode = current->next;
      delete current;
      current = nextNode;
    }
  }
  void insertAtBegning(int val)
  {
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
  }
  void insertAtEnd(int val)
  {
    Node *newNode = new Node(val);
    if (head == nullptr)
    {
      head = newNode;
      return;
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
      temp = temp->next;
    }
    temp->next = newNode;
  }
  void deleteAtBegning()
  {
    if (head != nullptr)
    {
      Node *temp = head;
      head = head->next;
      delete temp;
    }
  }
  void deleteAtEnd()
  {
    if (head == nullptr)
      return;
    if (head->next == nullptr)
    {
      delete head;
      return;
    }
    Node *temp = head;
    while (temp->next->next != nullptr)
    {
      temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
  }
};
int main()
{
  return 0;
}