class Solution:
    def sortedSquares(self, nums: list[int]) -> list[int]:
        # Declare variables O(1)
        i = 0
        j = len(nums) - 1
        array = [0] * len(nums)
        
        # use two pointers to build sorted squares array backwards O(N)
        for index in range(len(array) - 1, -1, -1):
            if (nums[i] ** 2 > nums[j] ** 2):
                array[index] = nums[i] ** 2
                i += 1
            else:
                array[index] = nums[j] ** 2
                j -= 1
        return array