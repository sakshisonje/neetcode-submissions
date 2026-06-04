class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //arr= 1 1 1 2 3 22 22 22 22
        //1->3  2->1 3->1 22->4

         unordered_map<int, int> freq;
         for (int n : nums) freq[n]++;
         //k=2 top 2 frequently occurred
         //sort by frequency descending ==> 22(4) 1(3) 2(1) 3(1)

        //cant sort a array by map you need to dump into vector and then sort
        //copy freq map as pairs into pairs variable
        vector<pair<int,int>> pairs(freq.begin(),freq.end());
            // OR WRITE LIKE THIS vector<pair<int,int>> pairs;
            // for (auto& [num, count] : freq) {
            //     pairs.push_back({num, count});
            // }
        //we can use sort(begin,end,comparator) function
        sort(pairs.begin(),pairs.end(),[](auto& a, auto& b){ return a.second > b.second;  });

         //result vector stores the top k elements
         vector<int> result;
         //return 22 1
         for (int i = 0; i < k; i++) {
                result.push_back(pairs[i].first);  // .first = number, .second = freq
        }

        return result;
    }
};
