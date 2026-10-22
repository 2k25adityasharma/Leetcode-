class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
       
        rev=0
        if(x<0):
            x=-x
            while(x>0):
                rev=rev*10+x%10
                x//=10
            if rev > 2**31 - 1 or rev < -(2**31):
                return 0
            return -rev
        
        while(x>0):
            rev=rev*10+x%10
            x//=10
        if rev > 2**31 - 1 or rev < -(2**31):
            return 0
        return rev
