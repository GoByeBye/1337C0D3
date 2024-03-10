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
So, this is the first time I've ever tried to code anything in C++ outside of those beginner applications (calculators and stuff).

Initially attacking the problem I wanted to see if I could find something similar to pythons `set()` function.

That's when I found the `std::unsorted_set` basically it's similar to what the ptyhon set function does.
Really it's as simple as that. It takes a vector (*in this case containing ints*) and creates a hashmap.
Since `unsorted_set` does not allow for duplicates we get rid of all the duplicates in it.
From there we just compare the lengths of both lists and see if they're different. If yes, there were duplicates.
If not, no duplicates were found.


*Solution 1*

See above comment on the soltuion ^

I know technically `$aryNumbers` is not an `array` but a `vector`. But I already commited my code containing the code below,
so I'll just keep the current variable naming and reflect it in my future changes (*code for I'm lazy*) 

Anyways, enough babbling here's the code.

```cpp
class Solution {
public:
    bool containsDuplicate(vector<int>& aryNumbers) {
        std::unordered_set<int> hashMap(aryNumbers.begin(), aryNumbers.end());

        return hashMap.size() != aryNumbers.size();
    }
};
```

Stats:
    - Runtime: 110ms | Beats: 27.94%
    - Memory: 75.27ms | Beats: 14.15%

Time complexity [O(n)](https://www.youtube.com/watch?v=g2o22C3CRfU)


While there's certainly room for optimization in the current approach, it's not immediately clear how to achieve it. Looking at solutions others have proposed, a common method is to sort the array first, then check for adjacent duplicates. This method is more efficient because it stops as soon as the first duplicate is found, which significantly improves performance. However, I don't entirely agree with adhering this strictly to the instructions.

<!-- TODO: Solve this a second time months from now and see how stupid the above comment is --->