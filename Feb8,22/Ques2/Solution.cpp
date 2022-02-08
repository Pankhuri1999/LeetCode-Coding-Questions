class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       unordered_map<int, int> mappy1;
       vector<int> vecy;
        for(int i = 0; i<nums1.size(); i++)
        {
            mappy1[nums1[i]]++;
        }
        for(int i = 0; i<nums2.size(); i++)
        {
            if (mappy1[nums2[i]] > 0)
            {
                vecy.push_back(nums2[i]);
                mappy1[nums2[i]] = INT_MIN;
            }
        }
        return vecy;
    }
};
