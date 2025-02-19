class Solution {
public:
    int NoM(int n, int &matches) {
        // Base case: if there is only one team, no matches are possible
        if (n <= 1) {
            return matches;
        }
        
        if (n % 2 == 0) { 
            matches += n / 2; // Add matches for even teams
            return NoM(n / 2, matches);
        } else {
            matches += n / 2; // Add matches for odd teams
            return NoM(n / 2 + 1, matches);
        }
    }

    int numberOfMatches(int n) {
        int matches = 0; // Initialize matches
        return NoM(n, matches); // Start recursion
       
    }
};
