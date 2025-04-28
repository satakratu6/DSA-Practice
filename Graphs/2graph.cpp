#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
  void dfs(int node, vector<vector<int>> &adj, int visit[], vector<int> &ls)
  {
    visit[node] = 1;
    ls.push_back(node);
    for (auto it : adj[node])
    {
      if (!visit[it])
      {
        dfs(it, adj, visit, ls);
      }
    }
  }

public:
  vector<int> DFSOfGraph(vector<vector<int>> &adj, int V)
  {
    int visit[V] = {0};
    int start = 0;
    vector<int> ls;
    dfs(start, adj, visit, ls);
    return ls;
  }
};
void addEdge(vector<vector<int>> &adj, int u, int v)
{
  adj[u].push_back(v);
  adj[v].push_back(u);
}
void display(vector<int> &ans)
{
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
}
int main()
{
  int V, E;
  cin >> V;
  cin >> E;
  vector<vector<int>> adj(V);
  for (int i = 0; i < E; i++)
  {
    int u, v;
    cin >> u >> v;
    addEdge(adj, u, v);
  }
  Solution obj;
  vector<int> ans = obj.DFSOfGraph(adj, V);
  display(ans);
}