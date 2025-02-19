class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        int sumt = 0;
        int sums = 0;
        for(auto i : s)
        {
            sums  += i;
        }
        for(auto i : t)
        {
            sumt += i;
        }
        return sumt-sums;
    }
    // char findTheDifference(string s, string t) 
    // {
    //     sort(begin(s),end(s));
    //     sort(begin(t),end(t));
    //     for(int i=0;i<s.size();i++)
    //     {
    //         if(s[i]!=t[i])
    //         {
    //             return t[i];
    //         }
    //     }
    //     return t[t.size()-1]; 
    // }
};