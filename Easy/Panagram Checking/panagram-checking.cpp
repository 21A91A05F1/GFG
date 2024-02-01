//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
        int arr[26]={0};
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!= ' ' and s[i]!=',')
            {
              if(s[i]-65 < 26)
              {
                  //when i get uppercase letter it executes.
                    // to convert the upper case to into lowercase;
                   // cout<<s[i];
                    int j=s[i]-65;
                    arr[j]=1;
              }
              else 
              {
                  //cout<<s[i];
                    int j=s[i]-97;
                    //storing the count of each alphabet into an array.
                    arr[j]=1;
              }
            }
        }
        for(int i=0;i<26;i++)
        {
           // cout<<arr[i]<<" ";
            if(arr[i]==0)
                return 0;
        }
        return 1;
        
     
        
    }

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends