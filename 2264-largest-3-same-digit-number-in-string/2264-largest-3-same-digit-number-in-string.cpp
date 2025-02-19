class Solution {
public:
    string largestGoodInteger(string nums) {
        string ans = "";
        
        for (int i = 0; i < nums.size() - 2; i++) {  
            if (nums[i] == nums[i + 1] && nums[i] == nums[i + 2]) {  
                string triplet(3, nums[i]);  // Create a string of three repeating digits
                
                if (ans.empty() || ans < triplet) {  
                    ans = triplet;  // Update ans with the largest triplet found
                }
            }
        }

        return ans;
    }
};
