//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User code template

class Solution {
  public:
   int upper_bound(int low,int high,int c,vector<int>&arr)
   {
       int ans=-1;
       while(low<=high)
       {
           int mid=(low+high)/2;
           if(arr[mid]<=c) 
           {
               ans=arr[mid];
               low=mid+1;
               
           }
           else high=mid-1;
       }
       return ans;
   }
   int lower_bound(int low,int high,int c,vector<int>&arr)
   {
       int ans=-1;
       while(low<=high)
       {
           int mid=(low+high)/2;
           if(arr[mid]>=c) 
           {
               ans=arr[mid];
               high=mid-1;
               
           }
           else low=mid+1;
       }
       return ans;
   }
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int a=upper_bound(0,n-1,x,arr);
        int b=lower_bound(0,n-1,x,arr);
        
        
        return {a,b};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends