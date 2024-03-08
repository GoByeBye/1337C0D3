# 1929. Concatenation Of Array

Given an integer array nums of length n, you want to create an array ans of length 2n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).

Specifically, ans is the concatenation of two nums arrays.

Return the array ans.

 

Example 1:

Input: `nums = [1,2,1]`
Output: `[1,2,1,1,2,1]`
Explanation: The array ans is formed as follows:
- `ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]`
- `ans = [1,2,1,1,2,1]`
Example 2:

Input: `nums = [1,3,2,1]`
Output: `[1,3,2,1,1,3,2,1]`
Explanation: The array ans is formed as follows:
- `ans = [nums[0],nums[1],nums[2],nums[3],nums[0],nums[1],nums[2],nums[3]]`
- `ans = [1,3,2,1,1,3,2,1]`
 

Constraints:

`n == nums.length`
`1 <= n <= 1000`
`1 <= nums[i] <= 1000`

## Self evaluation

At a first glance I need to figure out what what in the world concatenation is.

So, I looked it up and my next question is how have I never heard anyone say this word before?
Doesn't matter really back to the code.


From what I understand it wants me to practically duplicate the array. (*This is literally just nums + nums?*) 

*Solution 1 - nums + nums*

I can't tell whether this is serious or not it's literally just `array + array = answer`
Which I find somewhat confusing you could say.

```Python
class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        ans = nums + nums
        return ans
```
Stats:
    - Runtime 74ms | Beats 31.71%
    - Memory: 16.89MB | Beats: 78.84%

Time complexity: O(n)

*Solution 2 - Dropping the middle man*

Immediately after submitting and noticing my low performance score,
I realized I didn't need the middleman variable. I could straight up
just `return nums + nums` so that's exactly what I did

```Python
class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        return nums + nums
```
Stats:
    - Runtime 71ms | Beats 52.59%
    - Memory: 16.76MB | Beats: 98.47%

Time complexity: O(n)