class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      
        unordered_map<int,int> freq;
        for(int x:nums)
        {
            freq[x]++;
        }

        vector<pair<int,int>> pair;
        for(const auto& p:freq){
            pair.push_back({p.second,p.first});
        }
        sort(pair.rbegin(),pair.rend());
        vector<int> result;
        for(int i=0;i<k;i++)
        {
            result.push_back(pair[i].second);
        }
        return result;
    }
};
