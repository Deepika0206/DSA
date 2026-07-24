class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        string prefix =str[0];
        int n = str.size();
        for (int i =1;i<n; i++){
            // int st = str[i].find(prefix);
            while(str[i].find(prefix) !=0){
                prefix = prefix.substr(0, prefix.size()-1);
                if(prefix.empty()){return "";}
            }
        }
        return prefix;
        
    }
};