class Solution {
public:
    bool isPalindrome(string s) {
        string str1 = "";
        for(int i = 0; i<s.size(); i++)
        {
            if (isalnum(s[i]))
            {
                str1 += tolower(s[i]);
            }
        }
        for(int i=0,j=str1.size()-1; i<j; i++,j--)
        {
            if (str1[i]!=str1[j])
            {
                return false;
            }
        }
        return true;
    }
};
