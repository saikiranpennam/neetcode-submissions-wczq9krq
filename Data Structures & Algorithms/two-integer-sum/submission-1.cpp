class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashMap;
        for (int i=0; i<nums.size(); i++) {
            int difference = target - nums[i];
            if (hashMap.find(difference) != hashMap.end()) {
                return {hashMap[difference], i};
            }
            hashMap.insert({nums[i], i});
        }
        return {};
    }
};
