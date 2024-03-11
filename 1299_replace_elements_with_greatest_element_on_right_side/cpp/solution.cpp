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