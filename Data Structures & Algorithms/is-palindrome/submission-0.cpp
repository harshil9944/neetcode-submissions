class Solution {
public:
    bool isPalindrome(string s) {
        

        s.erase(remove(s.begin(), s.end(), '?'), s.end());

        int len = s.size();
        int l = 0;
        int r = len - 1;

        for(int i = 0; i < len; i++)
        {
            s[i] = tolower(s[i]);
        }

        while(l < r)
        {
            while(!isalnum(s[l]) && l < r)
                l++;
            while(!isalnum(s[r]) && l < r)
                r--;
                
            if(s[l] == s[r])
            {
                l++;
                r--;
            }
            else
            {
                return false;
            }
        }

        return true;    
    }
};
