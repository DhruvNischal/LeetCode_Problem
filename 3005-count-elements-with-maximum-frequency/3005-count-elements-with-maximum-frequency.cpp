class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) 
    {
        unordered_map<int,int>mp;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            mp[nums[i]]++;
        }
        
        int c = 0;
        int sum =0 ;
        for(int i = 0; i < nums.size();i++)
        {
            if(mp[nums[i]] > c)
            {
                c = mp[nums[i]];
                
                sum = 0;
                sum++;
               
            }
            else if(mp[nums[i]] == c)
            {
                sum++;
            }
        }
        return sum;
    }
};

// class Solution {
// public:
//     int maxFrequencyElements(vector<int>& nums) {
//         unordered_map<int, int> mp;
//         int maxFreq = 0, sum = 0;

//         // Count frequencies of each number
//         for (int num : nums) {
//             mp[num]++;
//             maxFreq = max(maxFreq, mp[num]);  // Track the maximum frequency
//         }

//         // Sum the occurrences of all numbers with max frequency
//         for (auto &[key, freq] : mp) {
//             if (freq == maxFreq) {
//                 sum += freq;
//             }
//         }

//         return sum;
//     }
// };
