class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low = 0, high = 0, res = INT_MIN, n = fruits.size();
        unordered_map<int, int> freq;
        for(high=0; high<n; high++){
            freq[fruits[high]]++;

            while(freq.size()>2){
                freq[fruits[low]]--;
                if(freq[fruits[low]]==0) freq.erase(fruits[low]);
                low++;
            }

            int leng = high-low+1;
            res=max(res, leng);
        }
        return res;
    }
};