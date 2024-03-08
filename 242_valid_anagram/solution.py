class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        source_word = s
        potential_anagram = t

        return Counter(source_word) == Counter(potential_anagram)
