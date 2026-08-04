class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
   int n = nums.size();

        vector<int> ans(n);

        int left = 0;
        int right = n-1;

        for (int pos = n - 1; pos >= 0; pos--)
        {
            const int leftsqr = nums[left] * nums[left];
            const int rightsqr = nums[right] * nums[right];

            if (leftsqr < rightsqr)
            {
                ans[pos] = rightsqr;
                --right;
            }
            else
            {
                ans[pos] = leftsqr;
                ++left;
            }
        }
        return ans;
    }   
};