class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> val; 
        int i = 0, j = 0;
        
 
        while (i < m && j < n) {
            if (nums1[i] < nums2[j]) {
                val.push_back(nums1[i]);
                i++;
            } else {
                val.push_back(nums2[j]);
                j++;
            }
        }


        while (i < m) {
            val.push_back(nums1[i]);
            i++;
        }

  
        while (j < n) {
            val.push_back(nums2[j]);
            j++;
        }

        for (int k = 0; k < m + n; k++) {
            nums1[k] = val[k];
        }
    }
};

// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int i = m - 1;  // Last index of actual elements in nums1
//         int j = n - 1;  // Last index of nums2
//         int k = m + n - 1; // Last index of nums1 (final merged position)

//         // Merge from the back to avoid using extra space
//         while (i >= 0 && j >= 0) {
//             if (nums1[i] > nums2[j]) {
//                 nums1[k--] = nums1[i--];
//             } else {
//                 nums1[k--] = nums2[j--];
//             }
//         }

//         // If there are remaining elements in nums2, copy them
//         while (j >= 0) {
//             nums1[k--] = nums2[j--];
//         }
//     }
// };
