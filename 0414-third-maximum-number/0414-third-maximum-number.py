class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        num1 = []
        for ele in nums:
            if ele not in num1:
                num1.append(ele)
        num1.sort()
        if(len(num1)<= 2):
            return num1[-1]
        else:
            return num1[-3]
        