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

*Solution 1 - Piece of cake*

Once again I can kind of cheat when solving this one because I solved it recently in Python.
But honestly it doesn't matter cause the answer is still the same. Simply do `nums + nums = numsnums`
and we're set.

It took me a minute to find the right equivelent in C++ but after finding `std::vector::insert` it was easy.

Enough chatting here's the code.
```Python
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        nums.insert(nums.end(), nums.begin(), nums.end());
        return nums;
    }
};
```
Stats:
    - Runtime 2ms | Beats 91.99%
    - Memory: 15.30MB | Beats: 21.19%

Time complexity: O(n)


This is ballsy of me but after looking at what other people with better memory performance submitted;
I'm pretty sure I ended up at a pretty good solution right away even if the memory usage was suboptimal