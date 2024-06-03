class Solution {
public:
    bool check(vector<int>& nums) {
        int k = 0;
        int n = nums.size();
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i + 1] < nums[i]){
                k = i + 1;
            break;}
        }
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
        reverse(nums.begin(), nums.end());

        for (int i = 0; i < n - 1; i++) {
            if (nums[i + 1] < nums[i])
                return false;
        }
        return true;
    }
};