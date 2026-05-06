class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        unordered_set<int> st(nums.begin(), nums.end());
        int longest = 1;

        for (auto it : st) {
            // Start only if it's the beginning of a sequence
            if (st.find(it - 1) == st.end()) {
                int x = it;
                int cnt = 1;

                while (st.find(x + 1) != st.end()) {
                    x++;
                    cnt++;
                }

                longest = max(longest, cnt);
            }
        }

        return longest;
    }
};