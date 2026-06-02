class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        vector<int> freq;
        unordered_set<int> set;

        for(int x:nums)
        {
            if(set.count(x)){
                return true;
            }
            set.insert(x);
        }
        return false;
    }
};