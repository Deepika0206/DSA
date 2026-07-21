class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low = 0, high = 0, res = INT_MIN, n = s.size();
        unordered_map<char, int> freq;
        for(high=0;high<n;high++){
            freq[s[high]]++;
            int leng=high-low+1;
            while(freq.size()<leng){
                freq[s[low]]--;
                if(freq[s[low]] ==0)
                freq.erase(s[low]);
                low++;
                leng=high-low+1;
            }
            leng=high-low+1;
            res=max(res,leng);
        }
        if(res==INT_MIN) return 0;
        else return res;
    }
};