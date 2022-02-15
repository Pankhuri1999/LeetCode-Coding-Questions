class Solution {
public:
    bool isPalindrome(string s) {
      string st = "";
      transform(s.begin(), s.end(), s.begin(), ::tolower);
      for(int i = 0; i<s.length(); i++)
      {
          if (isalpha(s[i]) || isdigit(s[i]))
          {
              st = st + s[i];
          }
      }
      for(int i = 0; i<st.length(); i++)
      {
          if (st[i] == st[st.length()-i-1])
          {
              cout<<st[i]<<" "<<st[st.length()-i-1]<<"||";
              continue;
          }
          return false;
          break;
      }
     return true;
      
    }
};
