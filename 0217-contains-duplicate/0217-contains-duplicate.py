class Solution(object):
    def containsDuplicate(self, nums):
        mp = {}
        length = len(nums)
        for (ind, val) in enumerate (nums):
            if val in mp:
                return True
            mp[val] = 1
        return False


        