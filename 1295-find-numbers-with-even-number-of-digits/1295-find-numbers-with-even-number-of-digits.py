def number_count(n):
    c=0
    while(n>0):
        c+=1
        n//=10
    return c 
    
class Solution(object):
    def findNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count =0
        for i in nums:
            c = number_count(i)
            if c%2==0:
                count +=1
        return count