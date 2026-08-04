class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //shiv
        int i = 0, j = 1, k = 1, n = nums.size();

        while ( j < n)
        {
            if (nums[i] == nums[j])
            {
                j++;
            }
            else 
            {
                nums[i+1] = nums[j];
                i++;
                k++;
                j++;
            }
        }return k;
    }
};