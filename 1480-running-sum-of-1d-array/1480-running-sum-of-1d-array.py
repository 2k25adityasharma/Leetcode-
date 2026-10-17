class Solution(object):
    def runningSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        a=0
        for i in range(len(nums)):
            a+=nums[i]
            nums[i]=a
        return nums    
