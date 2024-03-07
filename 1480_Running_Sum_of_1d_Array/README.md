# 1480. Running sum of 1d Array

Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.

 

Example 1:

Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
Example 2:

Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].
Example 3:

Input: nums = [3,1,2,10,1]
Output: [3,4,6,16,17]
 

Constraints:

`1 <= nums.length <= 1000`

`-10^6 <= nums[i] <= 10^6`


## Solution description (self evaluation)
This problem was honestly pretty boring all in all.
Intellectually this was somewhat challenging surprisingly because I haven't coded in Python in years.
I knew what I had to do but I didn't know how to do it.
But I need to refresh my memory before moving onto C++.



*Solution 1 - What I first came up with*

So my first solution worked first try surprisingly. But the code is really fucking ugly in my opinion.
From the way I like to work I want my code to be self documenting as to what it does to the point where it's
bordering psuedo code 
```Python
class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        for i in range(1, len(nums)):
            nums[i] += nums[i-1]
        return nums
```
Stats:
    - Runtime 52ms
    - Memory: 16.7MB

*Solution 2 - Enhance readability*
Enhancing readability wasn't that difficult to be honest. All it took was some renaming.
As you can see below the code quality is already 100x better


```Python
class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        number_of_elements = len(nums)

        for index in range(1, number_of_elements):
            nums[index] += nums[index - 1]
        return nums
```

Stats
    - Runtime: 33ms
    - Memory: 16.66MB
