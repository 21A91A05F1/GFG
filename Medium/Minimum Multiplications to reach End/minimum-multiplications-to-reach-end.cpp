//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    
    int minimumMultiplications(vector<int>& arr, int start, int end) {
        // code here
        vector<int>vis(100000,0);
        queue<pair<int,int>>q;
        q.push({start,0});
        vis[start]=1;
        while(!q.empty())
        {
            //cout<<q.front().first<<" ";

            int val=q.front().first;
            int mini=q.front().second;
            q.pop();
            
            if(val==end) return mini;
            for(int i=0;i<arr.size();i++)
            {
                int k=((val%100000)*(arr[i]%100000))%100000;
                if(vis[k]==0)
                {
                    q.push({k,mini+1});
                     vis[k]=1;
                }
            }
            
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int start, end;
        cin >> start >> end;
        Solution obj;
        cout << obj.minimumMultiplications(arr, start, end) << endl;
    }
}

// } Driver Code Ends