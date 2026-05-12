class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>prefix(n+1, 1), suffix(n+1, 1);
        vector<int>ans(n, 0);
        for(int i = 1; i<=n; i++){
            prefix[i]     = prefix[i-1] * nums[i-1];
            suffix[n-i] = suffix[n-i+1] * nums[n - i];
        }

        for(int i = 0; i<n; i++){
            ans[i] = prefix[i] * suffix[i+1]; 
        }

        return ans;
    }
};

/*
1   1   2   8  48
48  48  24  6  1

48 24 12 8

1 -1 0 0 0 0
0  0 6 6 3 1

0  -6 0 0 0
*/