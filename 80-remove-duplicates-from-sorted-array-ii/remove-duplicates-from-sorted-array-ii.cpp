class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //shiv
        int n = nums.size();
        int lo = 2;

        if ( n <= 2)
        {
            return n;
        }

        for (int hi = 2 ; hi < n;  hi++)
         if ( nums[hi] != nums[lo -2])
         {
            nums[lo] = nums[hi];
            lo++;
        }
       return lo;
    }
};