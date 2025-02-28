// C++ Program to remove duplicates from a
// sorted linked list

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node(int x)
  {
    data = x;
    next = nullptr;
  }
};

Node *removeDuplicates(Node *head)
{
  Node *curr = head;

  // Traverse the list
  while (curr != NULL && curr->next != NULL)
  {

    // Check if next value is same as current
    if (curr->data == curr->next->data)
    {
      Node *next_next = curr->next->next;
      curr->next = next_next;
    }
    else
      curr = curr->next;
  }
  return head;
}

void printList(Node *node)
{
  while (node != NULL)
  {
    cout << node->data << " ";
    node = node->next;
  }
  cout << endl;
}

int main()
{

  // Create a sorted linked list
  // 11->11->11->13->13->20
  Node *head = new Node(11);
  head->next = new Node(11);
  head->next->next = new Node(11);
  head->next->next->next = new Node(13);
  head->next->next->next->next = new Node(13);
  head->next->next->next->next->next = new Node(20);

  cout << "Linked list before duplicate removal:" << endl;
  printList(head);

  head = removeDuplicates(head);

  cout << "Linked list after duplicate removal:" << endl;
  printList(head);

  return 0;
}

