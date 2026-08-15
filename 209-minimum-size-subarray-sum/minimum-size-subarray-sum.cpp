class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int lo = 0;
        int minlen = INT_MAX;
        int sum = 0;
        for (int i = 0; i < n; ++i)
        {
            sum += nums[i];
            
            while (sum >= target)
            {

                minlen = min(minlen, i - lo + 1);

                sum -=nums[lo];
                ++lo; 
            }
        } 
        return minlen == INT_MAX ? 0: minlen;
    }
};