class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index = -1;

        // Find the first decreasing element from end
        for (int i = nums.size() - 2; i >= 0; i--) {
            // If a smaller element found
            if (nums[i] < nums[i + 1]) {
                // Store index
                index = i;
                break;
            }
        }

        // If no such index found
        if (index == -1) {
            // Reverse the entire array
            reverse(nums.begin(), nums.end());
            return;
        }

        // Find element just greater than nums[index]
        for (int i = nums.size() - 1; i > index; i--) {
            // Swap the two
            if (nums[i] > nums[index]) {
                swap(nums[i], nums[index]);
                break;
            }
        }

        // Reverse the part after index
        reverse(nums.begin() + index + 1, nums.end());
        
    }
};