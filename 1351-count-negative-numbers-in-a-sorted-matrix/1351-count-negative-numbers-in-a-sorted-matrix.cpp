class Solution {
public:
    int countNegatives(vector<vector<int>>& arr) {
        int m=arr.size(), n=arr[0].size();
        int i=m-1 ,j=0;
        int ans=0;
        while(i>=0 && j<n){
            if(arr[i][j] <0){
                ans +=n-j;
                i--;
            }else j++;
        }return ans;
    }
};