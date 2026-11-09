class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashMap = {}
        for index, value in enumerate(nums):
            difference = target - value
            if difference in hashMap:
                return [hashMap[difference], index]
            hashMap[value] = index