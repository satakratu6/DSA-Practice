#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  void dfs(int node, int vis[], vector<int> adj[], vector<int> &it)
  {
    vis[node] = 1;
    it.push_back(node);
    for (auto i : adj[node])
    {
      if (!vis[i])
      {
        dfs(i, vis, adj, it);
      }
    }
  }
  vector<int> dfsoOfGraph(int v, vector<int> adj[])
  {
    int vis[v] = {0};
    int start = 0;
    vector<int> it;
    return it;
  }
};

void addEdge(vector<int> adj[], int u, int v)
{
  adj[u].push_back(v);
  adj[v].push_back(u);
}

void printAns(vector<int> &ans)
{
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
}

int main()
{
  vector<int> adj[5];

  addEdge(adj, 0, 2);
  addEdge(adj, 2, 4);
  addEdge(adj, 0, 1);
  addEdge(adj, 0, 3);

  Solution obj;
  vector<int> ans = obj.dfsOfGraph(5, adj);
  printAns(ans);

  return 0;
}