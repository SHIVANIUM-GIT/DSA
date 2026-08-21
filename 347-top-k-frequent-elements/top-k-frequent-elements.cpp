class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        vector<vector<int>> pool(n + 1);
        vector<int> ans;

        for(int num : nums)
        {    
            mp[num]++;
        }   

        for(auto& [num, freq] : mp)
        {
            pool[freq].push_back(num);
        }

        for(int freq = n; freq >= 1; --freq)
        {
            for (int num : pool[freq]) 
            {
                ans.push_back(num);
                if (ans.size() == k)
                {
                    return ans;            
                }
            }
        }
        return ans;
    }
};