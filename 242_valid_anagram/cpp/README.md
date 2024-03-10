# 242. valid_anagram

Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true


Example 2:

Input: s = "rat", t = "car"
Output: false
 

Constraints:

`1 <= s.length, t.length <= 5 * 104`

`s` and `t` consist of lowercase English letters.
 

Follow up: What if the inputs contain Unicode characters? How would you adapt your solution to such a case?

## Self evaluation

First thoughts before attacking the problem.
---
Since I already solved this in Python I had somewhat an idea of what to do.
Within like 30 seconds I realized I could just sort both arrays and compare them


So I did just that

*Solution 1 - Using Counter*

This was way easier than I expected. But the code is a little unreadable
```Python
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        return Counter(s) == Counter(t)
```


Stats:
    - Runtime 40ms | Beats 92.14%
    - Memory: 17MB | Beats 48.51%

Time complexity: O(n)

*Solution 2 - Readability*
Very little had to be done. For some reason this is getting better stats overall I really think it shouldn't

```python
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        source_word = s
        potential_anagram = t

        return Counter(source_word) == Counter(potential_anagram)
```

Stats:
    - Runtime: 38ms | Beats 95.25%
    - Memory: 16.91MB | Beats 72.84%


## Follup up question
*See bottom of the task for the question*


So from my understanding we'd be getting raw Unicode characters. I'm like 70% sure we could just run a `bytes.decode(CHARSET)`
where `CHARSET` is most likely UTF-8 if it's a modern system. I honestly don't know though

<!-- TODO: Revisit this and see if you're smarter in the future -->
