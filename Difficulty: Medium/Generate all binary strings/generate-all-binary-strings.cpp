//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void fun(int ind,string s,vector<string>&res)
    {
        if(ind==0)
        {
            res.push_back(s);
            return;
        }
        
        fun(ind-1,s+'0',res);
        if(s.empty() or s.back()!='1') fun(ind-1,s+'1',res);
        
    }
    vector<string> generateBinaryStrings(int num){
        //Write your code
        vector<string>res;
        fun(num,"",res);
        return res;
        
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        
        vector<string> v = obj.generateBinaryStrings(n);
        for(auto it:v) cout<<it<<" ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends