class Solution:
    def minStartValue(self, nums: list[int]) -> int:
        start_value = 1
        
        while True:
            prefix = start_value
            for i in range(len(nums)):
                prefix += nums[i]
                if i == len(nums) - 1 and prefix > 0:
                    return start_value
                elif prefix > 0:
                    continue
                else:
                    start_value += 1
                    break
