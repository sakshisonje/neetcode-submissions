class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> hashTable;
        //sortstr
        for(string& strCopy : strs)
        {
            string sortStr=strCopy;
            sort(sortStr.begin(),sortStr.end());
            hashTable[sortStr].push_back(strCopy);
        }
        vector<vector<string>> result;

        for(auto& [key,group] : hashTable){
        //collect into result;
            result.push_back(group);
        }
        //return result vector
        return result;
    }
};
