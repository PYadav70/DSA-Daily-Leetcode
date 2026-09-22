class Solution {
public:
    bool isCycleDfs(vector<vector<int>>&adj, int u, vector<bool>&visited, vector<bool>&inRecurssion){
        visited[u] = true;
        inRecurssion[u] = true;

        for(int &v: adj[u]){
            if(visited[v] == false && isCycleDfs(adj, v, visited, inRecurssion)){
                return true;
            }else if(inRecurssion[v] == true){
                return true;
            }
        }
        inRecurssion[u] = false;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int v = graph.size();
        vector<bool>visited(v, false);
        vector<bool>inRecurssion(v, false);

        for(int i=0; i<v; i++){
            if(!visited[i]){
              isCycleDfs(graph,i,visited,inRecurssion);
            }
        }
        vector<int>safeNodes;
        for(int i=0; i<v; i++){
            if(inRecurssion[i] == false)
            safeNodes.push_back(i);
        }
        return safeNodes;
    }
};