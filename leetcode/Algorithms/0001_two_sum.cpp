/**
 * LeetCode 1. Two Sum
 * https://leetcode.com/problems/two-sum/
 */
#include <vector>
#include <unordered_map>

class Solution {
public:
    std:: vector<int> twoSum(std::vector<int>& nums, int target) {
        std:: unordered_map<int, int> fnd;
        for(int i=0; i<nums.size(); ++i){
            int b = target - nums[i];
            if(fnd.count(b)) return {fnd[b], i};
            fnd[nums[i]]=i;
        }
        return {};
    }
};