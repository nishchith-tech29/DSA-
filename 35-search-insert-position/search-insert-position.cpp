class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int high = nums.size()-1;
        int ans=nums.size();
        int low=0;
        while(low<=high)
        {
             int mid= high - ((high - low)/2);
            if(nums[mid]==target)
                return mid;
            if(nums[mid]>target)
            {
                
                high=mid-1;
                ans=mid;

            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
};