typedef vector<vector<int>> GRAPH;

class Solution {
public:
    
    void create_edge(GRAPH &graph, int from, int to) {
        graph[from].push_back(to);
        graph[to].push_back(from);
    }
    
    void dfs(GRAPH &graph, int node, vector<bool> &visited, vector<int> &cc) {
        visited[node] = true;
        cc.push_back(node);
        
        for(int neighbour : graph[node]) {
            if(!visited[neighbour]) {
                dfs(graph, neighbour, visited, cc);
            }
        }
    }
    
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        int nodes = (int)s.size();
        int n = (int)pairs.size();
        
        
        GRAPH graph(nodes);
        
        for(int i = 0; i < n; i++) {
            create_edge(graph, pairs[i][0], pairs[i][1]);
        }
        
        vector<bool> visited(nodes);
        
        for(int i = 0; i < nodes; i++) {
            if(!visited[i]) {
                vector<int> cc;
                dfs(graph, i, visited, cc);
                
                string cc_rs;
                
                for(int node : cc) {
                    cc_rs += s[node];
                }
                
                sort(cc.begin(), cc.end());
                sort(cc_rs.begin(), cc_rs.end());
                
                for(int j = 0; j < (int)cc.size(); j++) {
                    s[cc[j]] = cc_rs[j];
                }
            }
        }
        
        return s;
    }
};