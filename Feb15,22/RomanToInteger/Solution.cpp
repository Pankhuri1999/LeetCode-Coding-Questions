class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mappy;
        mappy['I'] = 1;
        mappy['V'] = 5;
        mappy['X'] = 10;
        mappy['L'] = 50;
        mappy['C'] = 100;
        mappy['D'] = 500;
        mappy['M'] = 1000;
        int count = 0;
        for(int i = 0; i<s.size(); i++)
        {
            if (mappy[s[i]] >= mappy[s[i+1]])
            {
                count = count + mappy[s[i]];
            }
            else if (mappy[s[i+1]] > mappy[s[i]])
            {
                count = count + (mappy[s[i+1]] - mappy[s[i]]);
                i++;
            }
        }
        return count;
    }
};
