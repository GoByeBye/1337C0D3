# 1299. Replace elements with greatest element on right side

Given an array arr, replace every element in that array with the greatest element among the elements to its right, and replace the last element with -1.

After doing so, return the array.

 

Example 1:

Input: arr = [17,18,5,4,6,1]
Output: [18,6,6,6,1,-1]
Explanation: 
- index 0 --> the greatest element to the right of index 0 is index 1 (18).
- index 1 --> the greatest element to the right of index 1 is index 4 (6).
- index 2 --> the greatest element to the right of index 2 is index 4 (6).
- index 3 --> the greatest element to the right of index 3 is index 4 (6).
- index 4 --> the greatest element to the right of index 4 is index 5 (1).
- index 5 --> there are no elements to the right of index 5, so we put -1.
Example 2:

Input: arr = [400]
Output: [-1]
Explanation: There are no elements to the right of index 0.
 

Constraints:

1 <= arr.length <= 104
1 <= arr[i] <= 105

## Self evaluation

Beginning with this problem I could also cheat like last time by looking at what I did in Python.


*Solution 1 - Looking back at Python*

Honestly this one wasn't that bad all things considered, it was more a case of how do I do this in C++

If you look at the code you can clearly see I took some inspiration from my earlier Python solution.
Interesting thing about C++ though is that you can rather easily work backwards on an array by reversing the index.


```cpp
class Solution {
public:
    vector<int> replaceElements(vector<int>& array) {
        int maxOfRight = -1;
        int currentElement;

        for (int index = array.size() - 1; index >= 0; --index) {
            currentElement = array[index];
            array[index] = maxOfRight;
            maxOfRight = std::max(maxOfRight, currentElement);
        }
        
        return array;
    }
};
```
Stats:
    - Runtime 74ms | Beats: 71.76%
    - Memory: 70.89MB | Beats: 79.76%

Time complexity: O(n)

Space complexity: O(1)