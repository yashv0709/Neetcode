class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> mul(n, 1);
        int ans = 1;
        // Left product
        for(int i = 0; i < n; i++) {
            mul[i] = ans;
            ans *= nums[i];
        }

        ans = 1;
        // Right product
        for(int i = n - 1; i >= 0; i--) {
            mul[i] *= ans;
            ans *= nums[i];
        }
        return mul;
    }
};