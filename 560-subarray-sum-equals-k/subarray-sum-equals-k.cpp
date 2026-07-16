class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
         int n = arr.size();

        // Map to store frequency of prefix sums
        unordered_map<int, int> prefixSumCount;

        // Initialize prefix sum and count of subarrays
        int prefixSum = 0;
        int count = 0;

        // Base case: prefix sum 0 has occurred once
        prefixSumCount[0] = 1;

        // Traverse through the array
        for (int i = 0; i < n; i++) {
            // Add current element to prefix sum
            prefixSum += arr[i];

            // Calculate the prefix sum that needs to be removed
            int remove = prefixSum - k;

            // If this prefix sum has been seen before,
            // add its count to the result
            if (prefixSumCount.find(remove) != prefixSumCount.end()) {
                count += prefixSumCount[remove];
            }

            // Update the frequency of the current prefix sum
            prefixSumCount[prefixSum]++;
        }

        // Return the total count of subarrays
        return count;
       
    }
};