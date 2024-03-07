class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        number_of_elements = len(nums)

        for index in range(1, number_of_elements):
            nums[index] += nums[index - 1]
        return nums
    
