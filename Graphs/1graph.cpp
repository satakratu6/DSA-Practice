#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
  vector<vector<int>> edges;
  int vertices;

  Graph(int v)
  {
    vertices = v;
    edges.resize(v);
  }

  void addEdge(int u, int v)
  {
    edges[u].push_back(v);
    edges[v].push_back(u);
  }

  void BFS(int start)
  {
    vector<bool> visited(vertices, 0);
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while (!q.empty())
    {
      int curr = q.front();
      q.pop();
      cout << curr << " ";
      for (auto x : edges[curr])
      {
        if (!visited[x])
        {
          q.push(x);
          visited[x] = true;
        }
      }
    }
    cout << endl;
  }

  void DFS_recursion(int start, vector<int> &visited)
  {
    visited[start] = true;
    cout << start << " ";
    for (int x : edges[start])
    {
      if (!visited[x])
        DFS_recursion(x, visited);
    }
  }

  void DFS(int start)
  {
    vector<int> visited(vertices, 0);
    DFS_recursion(start, visited);
    cout << endl;
  }

  void displayAdjList()
  {
    for (int i = 0; i < edges.size(); i++)
    {
      cout << i << ": ";
      for (int j : edges[i])
      {
        cout << j << " ";
      }
      cout << endl;
    }
  }
};

int main()
{
  int vertices, edges;
  cout << "Enter the number of vertices: ";
  cin >> vertices;
  Graph g(vertices);

  cout << "Enter the number of edges: ";
  cin >> edges;

  cout << "Enter the edges (u v):" << endl;
  for (int i = 0; i < edges; i++)
  {
    int u, v;
    cin >> u >> v;
    g.addEdge(u, v);
  }

  cout << "Adjacency List:" << endl;
  g.displayAdjList();

  int start;
  cout << "Enter the starting vertex for BFS and DFS: ";
  cin >> start;

  cout << "BFS Traversal: ";
  g.BFS(start);

  cout << "DFS Traversal: ";
  g.DFS(start);

  return 0;
}
