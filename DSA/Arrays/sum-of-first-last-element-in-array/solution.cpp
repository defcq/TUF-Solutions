class Solution {
public:
    int sumOfFirstAndLast(vector<int>& nums) {
        return nums[0] + nums[nums.size()-1];

    }
};