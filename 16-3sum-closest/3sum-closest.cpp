class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    int n = nums.size();

    sort(nums.begin(), nums.end());
    
    int closest_diff; 

    for (int i = 0; i < n - 2; i++){
        if ( i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }
        
        int left = i+1;
        int right= n-1;

        while ( left < right){
            int curr_sum = nums[i] + nums[left] + nums[right];

            if (abs(curr_sum - target) < abs( closest_diff - target))
            {
                closest_diff = curr_sum;
            }

            if ( curr_sum == target)
            {
                return curr_sum;
            }
            else if( curr_sum < target)
            {
              left++;  
            }
            else if(curr_sum > target )
            {
                right--;
            }
        }
    }return closest_diff;
 }
};