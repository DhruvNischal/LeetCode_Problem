class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int val = 0; 
        unordered_map<int,int>store;
        for(int i = 0; i < nums.size();i++)
        {
            store[nums[i]]++;
        }
        for(int i = 0 ;i <= nums.size(); i++)
        {
            if(store[i]==0)
            {
                val = i;
                break;
            }
        }
        return val;
    }
};