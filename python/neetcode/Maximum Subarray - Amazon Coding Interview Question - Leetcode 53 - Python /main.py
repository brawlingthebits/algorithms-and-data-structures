from typing import List

class Solution:
  def maxSubArray(self, nums: List[int]) -> int:
    maxSub = nums[0]
    curSum = 0

    for n in nums:
      if curSum < 0:
        curSum = 0
      curSum += n
      maxSub = max(maxSub, curSum)
    return maxSub
  
# Time complexity: O(n)
# Space complexity: O(1)
# Runtime: 60 ms, faster than 97.69% of Python3 online submissions for Maximum Subarray.
# Memory Usage: 15.1 MB, less than 5.11% of Python3 online submissions for Maximum Subarray.
print(Solution.maxSubArray(None, [-2,1,-3,4,-1,2,1,-5,4]))