#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  Node *next;
  Node(int value) : data(value), next(nullptr) {}
};

class LinkedList
{
public:
  Node *head;
  LinkedList() : head(nullptr) {}
  ~LinkedList()
  {
    Node *current = head;
    while (current != nullptr)
    {
      Node *nextNode = current->next;
      delete current;
      current = nextNode;
    }
  }

  void insertAtBegining(int value)
  {
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
  }

  void insertAtEnd(int value)
  {
    Node *newNode = new Node(value);
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

  void deleteAtBegining()
  {
    if (head != nullptr)
    {
      Node *temp = head;
      head = head->next;
      delete temp;
    }
  }

  void deleteEnd()
  {
    if (head == nullptr)
    {
      return;
    }
    if (head->next == nullptr)
    {
      delete head;
      head = nullptr;
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

  void insertionSort(int value)
  {
    Node *new_node = new Node(value);
    if (head == nullptr || head->data >= new_node->data)
    {
      new_node->next = head;
      head = new_node;
      return;
    }
    Node *current = head;
    while (current->next != nullptr && current->next->data < new_node->data)
    {
      current = current->next;
    }
    new_node->next = current->next;
    current->next = new_node;
  }

  bool search(int n)
  {
    Node *temp = head;
    while (temp != nullptr)
    {
      if (temp->data == n)
      {
        return true;
      }
      temp = temp->next;
    }
    return false;
  }

  void display()
  {
    Node *temp = head;
    while (temp != nullptr)
    {
      cout << temp->data << " ";
      temp = temp->next;
    }
    cout << endl;
  }

  void reverse()
  {
    Node *prev = nullptr;
    Node *current = head;
    Node *next = nullptr;
    while (current != nullptr)
    {
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
    }
    head = prev;
  }

  int length()
  {
    int count = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
      count++;
      temp = temp->next;
    }
    return count;
  }
};

int main()
{
  LinkedList list;
  list.insertAtBegining(3);
  list.insertAtEnd(5);
  list.insertAtBegining(2);
  list.insertionSort(4);
  bool found = list.search(5);
  cout << "Element found: " << found << endl;
  list.display();
  list.reverse();
  list.display();
  cout << "Length of list: " << list.length() << endl;
  return 0;
}
