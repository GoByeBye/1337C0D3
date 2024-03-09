class Solution {
public:
    bool containsDuplicate(vector<int>& aryNumbers) {
        std::unordered_set<int> hashMap(aryNumbers.begin(), aryNumbers.end());

        return hashMap.size() != aryNumbers.size();
    }
};
