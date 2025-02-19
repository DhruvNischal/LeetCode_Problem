class Solution {
public:
    string largestGoodInteger(string nums) 
    {
        string result = "";
        char ch = 0;
        for(int i = 0;i< nums.size()-2;i++)
        {
            if(nums[i] == nums[i+1] && nums[i+1] == nums[i+2])
            {
                if(nums[i] > ch)
                {
                    ch = nums[i];
                }
            }
        }
        if(ch == 0)
        {
            return result;
        }
        for(int i = 0 ;i < 3 ;i++)
        {
            result += ch;
        }
        return result;
    }
};