class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n = nums.size();
        int small = INT_MAX , second_small = INT_MAX;
        int large = INT_MIN , second_large = INT_MIN; 

        for(int i :nums)
        {
            if(i > large)
            {
               second_large = large;
                large = i;
            }     
            else if(i > second_large)
            {   
                second_large = i;
            }
            
            if(i < small)
            {
                second_small = small;
                small = i;
            }
            else if(i < second_small)
            {
                second_small = i;
            }
        }
        return (large * second_large) - (small * second_small);
    }
};