//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void fun(int i,int j,vector<int>&dr,vector<int>&dl,vector<int>&row,int n,vector<int>&ve,vector<vector<int>>&res)
    {
        //base conditions
        if(i>=n)
        {
            res.push_back(ve);
            return;
        }
        
        
        for(int k=0;k<n;k++)
        {
            if(dr[i+k]==1 or dl[i-k+n-1]==1 or row[k]==1) continue;
            else
            {
                dr[i+k]=1;
                dl[i-k+n-1]=1;
                row[k]=1;
                ve.push_back(k+1);
                fun(i+1,k,dr,dl,row,n,ve,res);
                ve.pop_back();
                dr[i+k]=0;
                dl[i-k+n-1]=0;
                row[k]=0;
            }
        }
    }
    vector<vector<int>> nQueen(int n) {
        // code here
        vector<int>row(n,0),dr(2*n-1,0),dl(2*n-1,0);
        vector<vector<int>>res;
        vector<int>ve;
        fun(0,0,dr,dl,row,n,ve,res);
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends