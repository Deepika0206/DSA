class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int left = 0, right = arr.size()-1;
        vector<int> result(arr.size());

        for(int i=arr.size()-1; i>=0; i--){
            if (abs(arr[left]) > abs(arr[right])){
                result[i] = arr[left] * arr[left];
                left++;
            }else{
                result[i] = arr[right] * arr[right];
                right--;
            }
        }
        return result;
    }
};