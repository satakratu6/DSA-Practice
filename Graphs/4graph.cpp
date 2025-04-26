// Implementation of Graph using Adjacency List
#include <iostream>
#include <vector>
using namespace std;

// Function to add an edge between two vertices
void addEdge(vector<vector<int>> &adj, int i, int j)
{
  adj[i].push_back(j);
  adj[j].push_back(i); // Undirected graph
}

// Function to display the adjacency list
void displayAdjList(const vector<vector<int>> &adj)
{
  for (int i = 0; i < adj.size(); i++)
  {
    cout << i << ": ";
    for (int j : adj[i])
    {
      cout << j << " ";
    }
    cout << endl;
  }
}

// Main function
int main()
{
  int V, E;
  cout << "Enter number of vertices: ";
  cin >> V;

  cout << "Enter number of edges: ";
  cin >> E;

  vector<vector<int>> adj(V); // Create adjacency list with V vertices

  cout << "Enter edges (u v format, 0-based indexing):" << endl;
  for (int i = 0; i < E; i++)
  {
    int u, v;
    cin >> u >> v;
    addEdge(adj, u, v);
  }

  cout << "Adjacency List Representation:" << endl;
  displayAdjList(adj);

  return 0;
}
