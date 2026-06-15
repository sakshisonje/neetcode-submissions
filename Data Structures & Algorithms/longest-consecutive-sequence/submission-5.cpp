class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //OPTIMAL SOLUTION
        int n=nums.size();
        if(n==0) return 0;
        unordered_set<int> s;
        int longest = 1;
     
        for(int n:nums)
        {
            s.insert(n);
        }
        for(auto num: s)
        {
            if(s.find(num-1) == s.end())
            {
                int count=1;
                int x = num;
                while(s.find(x+1) != s.end())
                {
                    x++;
                    count++;
                }
                longest=max(longest,count);
            }
        }


        return longest;
    }
};
