class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxnum = nums[0], minnum = nums[0];
        int ans = maxnum;
        for(int i=1; i<nums.size(); i++){
            int current = nums[i];
            int temp = max(current, max(maxnum*current, minnum*current));
            minnum = min(current, min(maxnum*current, minnum*current));
            maxnum = temp;
            ans = max(ans, maxnum);
        }
        return ans;
    }
};