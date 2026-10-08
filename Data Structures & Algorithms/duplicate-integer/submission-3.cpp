class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(auto& pair : freq){
            if(pair.second >= 2)
            return 1;
        }
        return 0;
    }
};