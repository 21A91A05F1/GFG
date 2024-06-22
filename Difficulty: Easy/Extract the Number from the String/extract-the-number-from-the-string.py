class Solution:
    def ExtractNumber(self,sentence):
        #code here
        s=sentence.split()
        
        l=[]
        for i in s:
            if i.isdecimal() and '9' not in i:
                l.append(int(i))
        if(len(l)):
            if(len(l)>1):
                return max(l)
            else:
                return l[0]
        else:
            return -1


#{ 
 # Driver Code Starts
t = int(input())
for _ in range(t):
    S = input()
    ob = Solution()
    ans = ob.ExtractNumber(S)
    print(ans)

# } Driver Code Ends