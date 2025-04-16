class Solution {
  public:
      bool isDetect(int node, int parent, vector<int>& visit, vector<vector<int>>& edges) {
          visit[node] = 1;
          for (auto it : edges[node]) {
              if (!visit[it]) {
                  if (isDetect(it, node, visit, edges)) {
                      return true;
                  }
              } else if (it != parent) {
                  return true;
              }
          }
          return false;
      }
  
      bool isCycle(int V, vector<vector<int>>& edges) {
          vector<int> visit(V, 0); // Indexing should be from 0 to V-1
          for (int i = 0; i < V; i++) {
              if (!visit[i]) {
                  if (isDetect(i, -1, visit, edges)) return true;
              }
          }
          return false;
      }
  };