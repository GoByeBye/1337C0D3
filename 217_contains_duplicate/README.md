# 217. Contains Duplicate

Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

 

Example 1:

Input: nums = [1,2,3,1]
Output: true
Example 2:

Input: nums = [1,2,3,4]
Output: false
Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
 

Constraints:

`1 <= nums.length <= 105`

`-109 <= nums[i] <= 109`

## Self evaluation

*Solution 1 - Simple but efficient*
I surprisingly struggled so much trying to do this *I lost focus and scrolled social media for 15 minutes*

So, I fully forgot how to check for duplicates in Python since I work mostly with PHP(ew) my daily life.
I kept on trying to find something simlar to PHP's array_unique which obviously wasn't really working out for me.

After some Googling I found out you can compare the length of `set(nums)` to the length of `$nums` to somewhat replcite array_unique.

```Python
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        if len(nums) != len(set(nums)):
            return True
        else:
            return False
```

Stats:
    - Runtime: 424ms
    - Memory: 32ms
    - Ranking: top 55%

Time complexity [O(n)](https://www.youtube.com/watch?v=g2o22C3CRfU)
