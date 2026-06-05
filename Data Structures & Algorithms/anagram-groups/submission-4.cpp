class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> hashTable;
        for(string& key : strs)
        {
            string word=key;
            sort(key.begin(),key.end());
            hashTable[key].push_back(word);
        }

        vector<vector<string>> result;
        for(auto& [key,group] : hashTable)
        {
            result.push_back(group);
        }

        return result;
    }
};
