class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int minPrice = INT_MAX;

        // Initialize the maximum profit to 0
        int maxProfit = 0;

        // Traverse each price in the array
        for (int price : prices) {
            // If current price is less than minPrice, update minPrice
            if (price < minPrice) {
                minPrice = price;
            }
            // Else calculate profit and update maxProfit if it's greater
            else {
                maxProfit = max(maxProfit, price - minPrice);
            }
        }

        // Return the maximum profit found
        return maxProfit;
        
    }
};