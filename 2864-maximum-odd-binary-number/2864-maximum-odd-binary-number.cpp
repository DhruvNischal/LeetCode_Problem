class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int countOnes = count(s.begin(), s.end(), '1');
        int countZeros = s.size() - countOnes;


        return string(countOnes - 1, '1') + string(countZeros, '0') + '1';
    }
};
