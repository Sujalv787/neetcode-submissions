class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int ans=0;
        string p="";
        for(int j=0;j<s.size();j++){
             for(int k=i;k<j;k++){
                if(s[k]==s[j]){
                    i=k+1;
                    break;
                }
             }
              ans=max(ans,j-i+1);
        }
        return ans;
    }
};
