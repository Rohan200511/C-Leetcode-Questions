class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        if(strs.empty()) return ans;

        for(int i=0;i<strs[0].size();i++){
            char ch=strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(i>=strs[j].size() || strs[j][i]!=ch) return ans;
            }
                ans+=ch;
        }
        return ans;
    }
};