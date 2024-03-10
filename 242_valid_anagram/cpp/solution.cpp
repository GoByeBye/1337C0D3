class Solution {
public:
    bool isAnagram(string source, string anagram) {
        if (source.size() != anagram.size()) {
            return false;
        }

        // Latin alphabet has 26 characters
        int count[26] = {0};

        for (int index = 0; index < source.size(); index++) {
            count[source[index] - 'a']++; // Add character to count
            count[anagram[index] - 'a']--; // Remove character from count
        }

        // Check if all counts are zero
        for (int i : count) {
            if (i != 0) {
                return false;
            }
        }

        return true;
    }
};