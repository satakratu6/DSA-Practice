#include <iostream>
using namespace std;

// Structure for a Node in the circular linked list
struct Node
{
  int data;
  Node *next;

  // Constructor to initialize a node with given data
  Node(int value) : data(value), next(nullptr) {}
};

// Class for the circular linked list
class CircularLinkedList
{
private:
  Node *head; // Pointer to the head (first node) of the list

public:
  // Constructor to initialize an empty list
  CircularLinkedList() : head(nullptr) {}

  // Function to insert a node at the end of the list
  void insertAtEnd(int value)
  {
    Node *newNode = new Node(value);
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
      temp->next = newNode;
      newNode->next = head;
    }
  }

  // Function to create a circular linked list from an array
  void createFromArray(int arr[], int size)
  {
    for (int i = 0; i < size; i++)
    {
      insertAtEnd(arr[i]);
    }
  }

  // Function to display the elements of the list
  void display()
  {
    if (head == nullptr)
    {
      cout << "List is empty" << endl;
      return;
    }
    Node *temp = head;
    do
    {
      cout << temp->data << " -> ";
      temp = temp->next;
    } while (temp != head);
    cout << "HEAD" << endl;
  }

  // Function to delete a node with a specific key
  void deleteByKey(int key)
  {
    if (head == nullptr)
      return;
    if (head->data == key)
    {
      Node *temp = head;
      if (head->next == head)
      {
        delete head;
        head = nullptr;
        return;
      }
      while (temp->next != head)
      {
        temp = temp->next;
      }
      temp->next = head->next;
      Node *toDelete = head;
      head = head->next;
      delete toDelete;
      return;
    }
    Node *current = head;
    Node *prev = nullptr;
    do
    {
      prev = current;
      current = current->next;
    } while (current != head && current->data != key);
    if (current->data == key)
    {
      prev->next = current->next;
      delete current;
    }
  }
};

int main()
{
  CircularLinkedList cll;

  // Array input
  int arr[] = {10, 20, 30, 40, 50};
  int size = sizeof(arr) / sizeof(arr[0]);

  cout << "Creating Circular Linked List from array..." << endl;
  cll.createFromArray(arr, size);
  cll.display();

  cout << "Deleting node with key 30:" << endl;
  cll.deleteByKey(30);
  cll.display();

  cout << "Deleting node with key 10 (first node):" << endl;
  cll.deleteByKey(10);
  cll.display();

  return 0;
}
