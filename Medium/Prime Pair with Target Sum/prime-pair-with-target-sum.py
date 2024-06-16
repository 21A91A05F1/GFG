#User function Template for python3

class Solution:
    def getPrimes(self, n):
        # code here
        import math
        def is_prime(k):
            a=int(math.sqrt(k))
            if(k<=1):
                return 0
            for i in range(2,a+1):
                if(k%i==0):
                    return 0
            else:
                return 1
        l=[]
        for i in range(1,(n//2)+1):
            if(is_prime(i) and is_prime(n-i)):
                l.append(i)
                l.append(n-i)
                return l
        else:
            l.append(-1)
            l.append(-1)
            return l





#{ 
 # Driver Code Starts
class IntArray:

    def __init__(self) -> None:
        pass

    def Input(self, n):
        arr = [int(i) for i in input().strip().split()]  #array input
        return arr

    def Print(self, arr):
        for i in arr:
            print(i, end=" ")
        print()


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):

        n = int(input())

        obj = Solution()
        res = obj.getPrimes(n)

        IntArray().Print(res)

# } Driver Code Ends