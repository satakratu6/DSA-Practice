#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<vector<int>> &adj, int u, int v)
{
  adj[u].push_back(v);
  adj[v].push_back(u);
}

vector<int> shortestPath(vector<vector<int>> &adj, int V, int s, int t)
{
  vector<int> visit(V + 1, 0);
  vector<int> parent(V + 1, -1);
  queue<int> q;
  q.push(s);
  visit[s] = 1;

  while (!q.empty())
  {
    int currentNode = q.front();
    q.pop();
    for (int it : adj[currentNode])
    {
      if (!visit[it])
      {
        visit[it] = 1;
        parent[it] = currentNode;
        q.push(it);
      }
    }
  }

  vector<int> path;
  if (visit[t] == 0)
  {
    return path; // No path found
  }

  int currentNode = t;
  while (currentNode != s)
  {
    path.push_back(currentNode);
    currentNode = parent[currentNode];
  }
  path.push_back(s);
  reverse(path.begin(), path.end());
  return path;
}

int main()
{
  int V, E;
  cin >> V >> E;
  vector<vector<int>> adj(V + 1);

  for (int i = 0; i < E; i++)
  {
    int u, v;
    cin >> u >> v;
    addEdge(adj, u, v);
  }

  int s, t;
  cin >> s >> t;

  vector<int> path = shortestPath(adj, V, s, t);

  if (path.size() == 0)
  {
    cout << "No path found" << endl;
  }
  else
  {
    for (int node : path)
    {
      cout << node << " ";
    }
    cout << endl;
  }

  return 0;
}
