class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> map;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            c=target-nums[i];
            if(map.find(c) != map.end())
            {
                return {map[c],i};
            }
            map.insert({nums[i],i});
        }
        return {};
}
};
//3,4,5,6 //7
//7-3 not in below map
// {} 
//push  3