class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int low =0, high=0, sum =0;
        int res =INT_MAX;

        while(high<n){
            sum+=nums[high];
            while(sum>=target){
                res=min(res, high-low+1);
                sum-=nums[low];
                low++;
            }high++;
        }
        if(res ==INT_MAX)return 0;
        else return res;
    }
};