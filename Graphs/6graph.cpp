// detect cycle in a directed graph
#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
  bool isDetect(int node, vector<vector<int>> &adj, vector<int> &visited, vector<int> &pathVisited)
  {
    visited[node] = 1;
    pathVisited[node] = 1;

    for (auto it : adj[node])
    {
      if (!visited[it])
      {
        if (isDetect(it, adj, visited, pathVisited))
          return true;
      }
      else if (pathVisited[it]) // if already visited and in same path
      {
        return true;
      }
    }

    pathVisited[node] = 0; // Backtrack
    return false;
  }

public:
  bool isCycle(vector<vector<int>> &adj, int V)
  {
    vector<int> visited(V, 0);
    vector<int> pathVisited(V, 0);

    for (int i = 0; i < V; i++)
    {
      if (!visited[i])
      {
        if (isDetect(i, adj, visited, pathVisited))
          return true;
      }
    }
    return false;
  }
};

void addEdge(vector<vector<int>> &adj, int u, int v)
{
  adj[u].push_back(v); // Directed Graph: Only one direction
}

int main()
{
  int V, E;
  cin >> V >> E;
  vector<vector<int>> adj(V);
  for (int i = 0; i < E; i++)
  {
    int u, v;
    cin >> u >> v;
    addEdge(adj, u, v);
  }
  Solution obj;
  bool result = obj.isCycle(adj, V);
  cout << result;
}
