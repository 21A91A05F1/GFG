//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void dfs(int node,vector<int> adj[],vector<int>&vis)
    {
       
        for(auto it:adj[node])
        {
            if(vis[it]==0)
            {
                vis[it]=1;
                dfs(it,adj,vis);
            }
        }
    }
    int numProvinces(vector<vector<int>> graph, int V) {
        // code here
        vector<int>adj[V];
        for(int i=0;i<graph.size();i++)
        {
            for(int j=0;j<graph[0].size();j++)
            {
               if(graph[i][j]==1 and i!=j)
               {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
               }
            }
        }
        vector<int>vis(V,0);
        int c=0;
        for(int i=0;i<V;i++)
        {
            if(vis[i]==0)
            {
                vis[i]=1;
                dfs(i,adj,vis);
                c+=1;
            }
        }
        return c;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends