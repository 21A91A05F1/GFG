//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int totalFruits(int N, vector<int> &fruits) {
        if(N==0) return 0;
        unordered_map<int,int>mpp;
        int start=0,maxi=0;
        
        for(int ind=0;ind<N;ind++)
        {
            mpp[fruits[ind]]++;
            
            //what if it has more than two distinct numbers, then we have to remove this.
            
            while(mpp.size()>2)
            {
                mpp[fruits[start]]--;
                if(mpp[fruits[start]]==0)
                {
                    mpp.erase(fruits[start]);
                }
                start++;
            }
            maxi=max(maxi,ind-start+1);
        }
        return maxi;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> fruits(N);
        for (int i = 0; i < N; i++) cin >> fruits[i];
        Solution obj;
        cout << obj.totalFruits(N, fruits) << endl;
    }
    return 0;
}

// } Driver Code Ends