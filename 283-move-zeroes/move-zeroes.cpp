class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int hi = 0;

        for (int lo = 0; lo < nums.size(); lo++) {

            if (nums[lo] != 0) {

                swap(nums[lo], nums[hi]);
                hi++;
                
            }
        }
    }
};