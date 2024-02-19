//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        unordered_map<char,int>mpp;
        for(int i=0;i<s.size();i++)
        {
            mpp[s[i]]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto it:mpp)
        {
            pq.push({it.second,it.first});
        }
        while(k!=0)
        {
            int a=pq.top().first;
            char b=pq.top().second; 
            pq.pop();
            k-=1;
            a-=1;
            pq.push({a,b});
        }
        int sum=0;
        while(!pq.empty())
        {
            //cout<<pq.top().first<<" "<<pq.top().second<<endl;
            sum+=(pq.top().first)*(pq.top().first);
            pq.pop();
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends