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
    visited[start]=true;
    while (!q.empty())
    {
      int curr = q.front();
      q.pop();
      cout << curr << " ";
      // iterate over edges[curr]
      for (auto x : edges[curr])
      {
        if (!visited[x])
        {
          q.push(x);
          visited[x] = true;
        }
      }
    }
  }
  void DFS_recursion(int start, vector<int>& visited){
    //node data print
    visited[start]=true;
    cout<<start<<" ";
    for(int x:edges[start]){
      if(!visited[start])
      DFS_recursion(x,visited);
    }
  }
  void DFS(int start){
    vector<int> visited;
    DFS_recursion(start,visited);
  }
};
