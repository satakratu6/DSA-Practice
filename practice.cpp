#include <bits/stdc++.h>
using namespace std;
class Graph
{
public:
  int vertices;
  vector<vector<int>> edges;
  Graph(int vertices)
  {
    vertices = vertices;
    edges.resize(vertices);
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
    for (auto x : edges[start])
    {
      if (!visited[x])
      {
        DFS_recursion(x, visited);
      }
    }
  }
  void DFS(int start)
  {
    vector<int> visited(vertices, 0);
    DFS_recursion(start, visited);
    cout << endl;
  }
};