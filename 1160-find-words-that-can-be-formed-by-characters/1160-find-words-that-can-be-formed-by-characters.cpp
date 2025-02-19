class Solution {
public:
    int countCharacters(vector<string>& words, string chars) 
    {
        unordered_map<char,int>count;
        unordered_map<char,int>temp;

        for(auto i : chars)
        {
            count[i]++;
        }
        
        temp = count;
        int track = 0;
        bool valid = true;
        for(int i = 0 ; i < words.size() ; i++)
        {
            valid = true;
            temp = count;
            for(auto j : words[i])
            {
                if(temp[j]==0)
                {
                    valid = false;
                    break;
                }
                temp[j]--;
            }
            if(valid)
            {
                track+= words[i].size();
            }
            
        }
        return track; 
    }
};