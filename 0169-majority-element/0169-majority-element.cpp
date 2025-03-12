class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end()); // Sort the array
        
        // Initialize count to 1 for the first element
        int count = 1;
        int majorityElement = nums[0]; // Start with the first element
        int maxCount = 1; // Track the maximum count
        
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                count++; // Increment count if the current element is the same as the previous one
            } else {
                count = 1; // Reset count if it's a different element
            }
            
            // If current count exceeds maxCount, update majorityElement
            if (count > maxCount) {
                maxCount = count;
                majorityElement = nums[i];
            }
            
            // If the majority element count exceeds n/2, return early
            if (maxCount > n / 2) {
                return majorityElement;
            }
        }
        
        return majorityElement;
    }
};