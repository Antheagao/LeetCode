class Solution:
    def runningSum(self, nums: list[int]) -> list[int]:
        array = [nums[0]]
        for index in range(1, len(nums)):
            array.append(nums[index] + array[-1])
            
        return array