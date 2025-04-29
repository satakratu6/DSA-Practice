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

// Insertion at beginning
Node *insertAtBeginning(Node *head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
    return head;
}

// Insertion at end
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

// Insertion at a specific position
Node *insertAtPosition(Node *head, int position, int value)
{
    if (position <= 0)
    {
        cout << "Invalid position\n";
        return head;
    }
    if (position == 1)
    {
        return insertAtBeginning(head, value);
    }
    Node *newNode = new Node(value);
    Node *current = head;
    for (int i = 1; i < position - 1 && current != NULL; i++)
    {
        current = current->next;
    }
    if (current == NULL)
    {
        cout << "Position out of bounds\n";
        delete newNode;
        return head;
    }
    newNode->next = current->next;
    current->next = newNode;
    return head;
}

// Deletion at beginning
Node *deleteAtBeginning(Node *head)
{
    if (head == NULL)
        return NULL;
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

// Deletion at end
Node *deleteAtEnd(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *current = head;
    while (current->next->next != NULL)
    {
        current = current->next;
    }
    delete current->next;
    current->next = NULL;
    return head;
}

// Deletion at specific position
Node *deleteAtPosition(Node *head, int position)
{
    if (head == NULL || position <= 0)
    {
        cout << "Invalid position\n";
        return head;
    }
    if (position == 1)
    {
        return deleteAtBeginning(head);
    }
    Node *current = head;
    for (int i = 1; i < position - 1 && current != NULL; i++)
    {
        current = current->next;
    }
    if (current == NULL || current->next == NULL)
    {
        cout << "Position out of bounds\n";
        return head;
    }
    Node *temp = current->next;
    current->next = temp->next;
    delete temp;
    return head;
}

// Modify contents at position
Node *modifyNode(Node *head, int position, int newValue)
{
    if (head == NULL || position <= 0)
    {
        cout << "Invalid position\n";
        return head;
    }
    Node *current = head;
    for (int i = 1; i < position && current != NULL; i++)
    {
        current = current->next;
    }
    if (current == NULL)
    {
        cout << "Position out of bounds\n";
        return head;
    }
    current->data = newValue;
    return head;
}

// Reverse the linked list
Node *reverseList(Node *head)
{
    Node *prev = NULL;
    Node *current = head;
    Node *next = NULL;
    while (current != NULL)
    {
        next = current->next; // Save next node
        current->next = prev; // Reverse current node
        prev = current;       // Move prev forward
        current = next;       // Move current forward
    }
    head = prev;
    return head;
}
// Remove all duplicates from a sorted list
Node *deleteDuplicates(Node *head)
{
    // dummy→next = head
    Node *dummy = new Node(0);
    dummy->next = head;
    Node *prev = dummy;
    Node *cur = head;

    while (cur)
    {
        // if duplicate sequence detected
        if (cur->next && cur->data == cur->next->data)
        {
            // skip all equal nodes
            while (cur->next && cur->data == cur->next->data)
            {
                cur = cur->next;
            }
            prev->next = cur->next;
        }
        else
        {
            prev = cur;
        }
        cur = cur->next; // advance properly
    }
    Node *newHead = dummy->next;
    delete dummy;
    return newHead;
}

// Main function to test
int main()
{
    Node *head = NULL;
    int choice, value, position;

    do
    {
        cout << "\n1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert at Position\n";
        cout << "4. Delete at Beginning\n";
        cout << "5. Delete at End\n";
        cout << "6. Delete at Position\n";
        cout << "7. Traverse\n";
        cout << "8. Search\n";
        cout << "9. Length\n";
        cout << "10. Modify Node\n";
        cout << "11. Reverse List\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            head = insertAtBeginning(head, value);
            break;
        case 2:
            cout << "Enter value: ";
            cin >> value;
            head = insertAtEnd(head, value);
            break;
        case 3:
            cout << "Enter position and value: ";
            cin >> position >> value;
            head = insertAtPosition(head, position, value);
            break;
        case 4:
            head = deleteAtBeginning(head);
            break;
        case 5:
            head = deleteAtEnd(head);
            break;
        case 6:
            cout << "Enter position to delete: ";
            cin >> position;
            head = deleteAtPosition(head, position);
            break;
        case 7:
            traverse(head);
            break;
        case 8:
            cout << "Enter value to search: ";
            cin >> value;
            if (search(head, value))
                cout << "Found\n";
            else
                cout << "Not Found\n";
            break;
        case 9:
            cout << "Length: " << length(head) << endl;
            break;
        case 10:
            cout << "Enter position and new value: ";
            cin >> position >> value;
            head = modifyNode(head, position, value);
            break;
        case 11:
            head = reverseList(head);
            break;
        case 0:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice\n";
        }
    } while (choice != 0);

    return 0;
}
