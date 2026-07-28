// 1 TWO SUM
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        map<int,int> mp;

        for (int i=0;i<n;i++){
            int remaining = target - nums[i];   //9-2 = 7 we need to find 7 in the array

            if(mp.find(remaining) != mp.end()){
                return {mp[remaining],i};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};