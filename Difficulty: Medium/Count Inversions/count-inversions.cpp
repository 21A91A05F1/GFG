//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
      long long merge(long long arr[],long long start,long long mid,long long end){
        vector<long long>temp(end-start+1);
        long long left=start;
        long long right=mid+1;
        long long count=0;
        long long index=0;
        while(left<=mid && right<=end){
            if(arr[left]<=arr[right]){
                temp[index]=arr[left];
                left++;
                index++;
            }
            else{
                temp[index]=arr[right];
                index++;
                right++;
                count+=(mid-left+1);
            }
        }
        while(left<=mid){
            temp[index]=arr[left];
            left++;
            index++;
        }
        while(right<=end){
            temp[index]=arr[right];
            right++;
            index++;
        }
        index=0;
        while(start<=end){
            arr[start]=temp[index];
            start++;
            index++;
        }
        return count;
    }
    
    long long mergesort(long long arr[],long long start,long long end){
        long long count=0;
        if(start==end){
            return 0;
        }
        long long mid=start+(end-start)/2;
        
        count+=mergesort(arr,start,mid);
        count+=mergesort(arr,mid+1,end);
        count+=merge(arr,start,mid,end);
        
        return count;
    }
    
    
    
    
    long long int inversionCount(long long arr[], int n) {
        // Your Code Here
        return mergesort(arr,0,n-1);
    }
        
};

//{ Driver Code Starts.

int main() {

    long long T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        long long A[N];
        for (long long i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A, N) << endl;
    }

    return 0;
}

// } Driver Code Ends