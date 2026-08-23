class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low = 0;
        int ans = -1;
        
        unordered_map<int, int> mp;
        
        for(int i = 0; i < fruits.size(); ++i)
        {
            mp[fruits[i]]++;

            while(mp.size() > 2)
            {
                mp[fruits[low]]--;

                if(mp[fruits[low]] == 0)
                {
                    mp.erase(fruits[low]);
                }

                ++low;
            }

            if(mp.size() <= 2)
            {
                ans = max(ans, i - low +1);
            }

        }
    return ans;
    }
};