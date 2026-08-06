class Solution {
public:

    bool inpil(string s, int i, int j)
    {
        while (i <= j)
        {
            if (s[i++] != s[j--]) return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n =s.size();
        int i = 0;
        int j = n-1;

        while(i <= j)
        {
            if (s[i] != s[j]) return (inpil(s, i+1, j) || inpil(s,i ,j-1));
            i++;
            j--;
        }
        return true;
    }
};