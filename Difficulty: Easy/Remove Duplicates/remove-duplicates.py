#User function Template for python3
class Solution:
    def removeDups(self, s):
        # code here
        k=''
        for i in s:
            if i not in k:
                k+=i
        return k
    




#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    T = int(input())
    for i in range(T):
        s = input()

        ob = Solution()
        answer = ob.removeDups(s)

        print(answer)

# } Driver Code Ends