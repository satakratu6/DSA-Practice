#include <bits/stdc++.h>
using namespace;
struct Node
{
  int data;
  Node *next;
  Node(int value) : data(value), next(nullptr) {}
};
void reverse(Node *&head)
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