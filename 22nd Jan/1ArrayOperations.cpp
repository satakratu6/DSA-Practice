#include <iostream>
using namespace std;

void display(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void search(int arr[], int n, int ele)
{
  bool found = false;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == ele)
    {
      cout << ele << " is present at: " << i << endl;
      found = true;
      break;
    }
  }
  if (!found)
  {
    cout << ele << " is not present" << endl;
  }
}

void insertion(int arr[], int &n, int pos, int ele)
{
  for (int i = n; i > pos; i--)
  {
    arr[i] = arr[i - 1];
  }
  arr[pos] = ele;
  n++;
  display(arr, n);
}

void deletion(int arr[], int &n, int index)
{
  for (int i = index; i < n - 1; i++)
  {
    arr[i] = arr[i + 1];
  }
  n--;
  display(arr, n);
}

int main()
{
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;
  int arr[100];
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int choice;
  cout << "Enter your choice to perform operations:\n";
  cout << "1: Display the array\n";
  cout << "2: Search element\n";
  cout << "3: Insert element at a specific position\n";
  cout << "4: Delete element at a specific index\n";
  cin >> choice;

  switch (choice)
  {
  case 1:
  {
    display(arr, n);
    break;
  }
  case 2:
  {
    int ele;
    cout << "Enter the element to search: ";
    cin >> ele;
    search(arr, n, ele);
    break;
  }
  case 3:
  {
    int ele, pos;
    cout << "Enter the element to insert: ";
    cin >> ele;
    cout << "Enter the position to insert: ";
    cin >> pos;
    if (pos >= 0 && pos <= n)
    {
      insertion(arr, n, pos, ele);
    }
    else
    {
      cout << "Invalid position" << endl;
    }
    break;
  }
  case 4:
  {
    int index;
    cout << "Enter the index to delete: ";
    cin >> index;
    if (index >= 0 && index < n)
    {
      deletion(arr, n, index);
    }
    else
    {
      cout << "Invalid index" << endl;
    }
    break;
  }
  default:
    cout << "Invalid choice" << endl;
  }

  return 0;
}
