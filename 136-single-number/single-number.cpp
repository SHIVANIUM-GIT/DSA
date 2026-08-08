class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = 0; 

        if(n == 1 )
        {   
            return nums[n-1];
        }

        for(int i = 0; i <n; i++){
            ans ^= nums[i]; 
        }
    return ans;
    }
};