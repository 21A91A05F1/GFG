#User function Template for python3

class Solution:    
    ##Complete this function
    # function to convert a given Gray equivalent n to Binary equivalent.
    def grayToBinary(self,n):
        ##Your code here
        b=bin(n)[2:]
        l=[]
        l.append(0)
        for i in b:
            x=(int(i))^(l[-1])
            l.append(x)
        l.pop(0)
        s=""
        for i in l:
            s+=str(i)
        res=int(s,2)
        return res

#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math


def main():
    
    T=int(input())
    
    while(T>0):
        
        
        n=int(input())
        ob=Solution()
        print(ob.grayToBinary(n))
        T-=1

if __name__=="__main__":
    main()
# } Driver Code Ends