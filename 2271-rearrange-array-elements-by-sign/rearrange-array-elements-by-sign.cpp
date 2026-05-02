class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int N=nums.size();
        vector<int> ans(N, 0);
        int n=1,p=0;
        for(int i=0;i<N;i++)
        { 
            if(nums[i]>=0)
            {
                ans[p]=nums[i];
                p+=2;

            }
            else
            {
                ans[n]=nums[i];
                n+=2;
            }
        

        }
        return ans;
    }

};