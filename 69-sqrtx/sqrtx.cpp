class Solution {
public:
    int mySqrt(int x) {
        int high=x,low=1,ans=1;
        while(high>=low)
        {
            long mid=high -(high-low)/2;
            if(mid*mid <= x)
            {
                low=mid+1;

            }
            else
            {
                high=mid-1;
            }
        }
        return high;
        
    }
};