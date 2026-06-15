class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //sort
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int countCurr=0;
        int longest=1;
        int last_smaller = INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]-1 == last_smaller)
            {
                countCurr++;
                last_smaller=nums[i];
            }
            if(nums[i]!=last_smaller)
            {
                countCurr=1;
                last_smaller=nums[i];
            }
            longest=max(longest,countCurr);
        }
        return longest;
        
    }
};
