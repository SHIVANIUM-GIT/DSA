class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int ans = 0;
        int cur = 0;

        for( auto u:requests)
        {
            ans += abs(cur - u);
            cur = u;
        }
    return ans;
    }
};