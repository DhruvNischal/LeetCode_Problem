class Solution {
public:
    string largestOddNumber(string num) {
        // Iterate from the end of the string
        for (int i = num.size() - 1; i >= 0; --i) {
            // Check if the current character represents an odd digit
            if ((num[i] - '0') % 2 != 0) {
                // Return the substring from the start up to the last odd digit
                return num.substr(0, i + 1);
            }
        }
        // If no odd digit is found, return an empty string
        return "";
    }
};
