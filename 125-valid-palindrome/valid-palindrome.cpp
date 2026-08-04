class Solution {
public:
    bool isPalindrome(string s) {
        int lo = 0;
        int hi = s.size() - 1;

        while (lo < hi) {

            while (lo < hi && !isalnum((unsigned char)s[lo])) {
                lo++;
            }

            while (lo < hi && !isalnum((unsigned char)s[hi])) {
                hi--;
            }

            if (tolower((unsigned char)s[lo]) != tolower((unsigned char)s[hi])) {
                return false;
            }

            lo++;
            hi--;
        }

        return true;
    }
};