class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mapC;
        mapC[0]=1; // empty prefix
        int sum=0;
        int count=0;
        int target=0;
        for(int& n:nums)
        {
            sum=sum+n;
            target=sum-k;
            if(mapC.find(target) != mapC.end()){
                count=count+mapC[target];
            }
            mapC[sum]++;
        }
        return count;
    }
};