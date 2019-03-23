def canJump(self, nums):
    """
    :type nums: List[int]
    :rtype: bool
    """

    target = len(nums) - 1 #target is the point that canjump to the previous target
    i = len(nums) - 2
    while i >= 0:
        if nums[i] + i >= target:
            target = i
        i -= 1
    if nums[0] >= target:  # we need to start at the nums[0], nums[0] MUST reach the last target
        return True
    else:
        return False
    


nums = [1, 2, 3, 2, 1, 2 ,3,2, 1, 1, 0, 0, 1]

print(canJump(22, nums))