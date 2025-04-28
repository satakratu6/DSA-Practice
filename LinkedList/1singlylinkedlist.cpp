#include <iostream>
using namespace std;

// Define a Node structure
struct Node
{
  int data;
  Node *next;
  Node(int value)
  {
    data = value;
    next = NULL;
  }
};

// Traversal
void traverse(Node *head)
{
  Node *current = head;
  while (current != NULL)
  {
    cout << current->data << " ";
    current = current->next;
  }
  cout << endl;
}

// Search for an element
bool search(Node *head, int key)
{
  Node *current = head;
  while (current != NULL)
  {
    if (current->data == key)
      return true;
    current = current->next;
  }
  return false;
}

// Find length of linked list
int length(Node *head)
{
  int len = 0;
  Node *current = head;
  while (current != NULL)
  {
    len++;
    current = current->next;
  }
  return len;
}

// Insertion at end (for building list easily)
Node *insertAtEnd(Node *head, int value)
{
  Node *newNode = new Node(value);
  if (head == NULL)
  {
    head = newNode;
    return head;
  }
  Node *current = head;
  while (current->next != NULL)
  {
    current = current->next;
  }
  current->next = newNode;
  return head;
}

// Build linked list from array
Node *buildFromArray(int arr[], int n)
{
  Node *head = NULL;
  for (int i = 0; i < n; i++)
  {
    head = insertAtEnd(head, arr[i]);
  }
  return head;
}

// Rest of the operations: Modify, Delete, etc.
// --- You can reuse your previous code here ---

// Main function to test
int main()
{
  Node *head = NULL;
  int n;

  cout << "Enter number of elements: ";
  cin >> n;

  int arr[n];
  cout << "Enter " << n << " elements: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  head = buildFromArray(arr, n);

  cout << "Linked list created: ";
  traverse(head);

  // Now you can perform all other operations here if you want
  // (like search, insert, delete, modify, reverse, etc.)

  return 0;
}
