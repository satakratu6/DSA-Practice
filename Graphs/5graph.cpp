// detect cycle in an undirected graph
#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
  bool isDetect(int node, int parent, vector<vector<int>> &adj, vector<int> &visit)
  {
    visit[node] = 1;
    for (auto it : adj[node])
    {
      if (!visit[it])
      {
        if (isDetect(it, node, adj, visit))
        {
          return true;
        }
      }
      else if (it != parent)
      {
        return true;
      }
    }
    return false;
  }

public:
  bool isCycle(vector<vector<int>> &adj, int V)
  {
    vector<int> visit(V, 0);
    for (int i = 0; i < V; i++)
    {
      if (!visit[i])
      {
        if (isDetect(i, -1, adj, visit))
          return true;
      }
    }
    return false;
  }
};

void addEdge(vector<vector<int>> &adj, int u, int v)
{
  adj[u].push_back(v);
  adj[v].push_back(u); // Undirected graph, so add both directions
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
