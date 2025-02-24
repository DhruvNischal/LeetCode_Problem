class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) 
    {
        int i  = nums1.size();
        int j  = nums2.size();
        int val1 = 0;
        int val2 = 0;

        while(val1 < i && val2 < j)
        {
            if(nums1[val1]==nums2[val2])
            {
                return nums1[val1];
            }
            else if(nums1[val1]<nums2[val2])
            {
                val1++;
            }
            else
            {
                val2++;
            }
        }
        return -1;
    }
};