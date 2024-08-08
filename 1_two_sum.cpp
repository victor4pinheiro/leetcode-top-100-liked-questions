class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        unordered_map<int, int> convertedVector;
        for (int i = 0; i < size; i++) {
            int difference = target - nums.at(i);
            
            if (convertedVector.find(difference) != convertedVector.end())
                return {convertedVector[difference], i};

            convertedVector[nums[i]] = i;
        }

        return {};
    }
};
