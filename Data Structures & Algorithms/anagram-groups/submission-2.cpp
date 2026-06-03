class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map <string,vector<string>> hashTable;
        //sortStr
        for(string& word: strs)
        {
            string sortStr=word;
            sort(sortStr.begin(),sortStr.end());
            hashTable[sortStr].push_back(word);
        }   
        vector<vector<string>> result;
        for(auto & [wordKey, groupAnagram]: hashTable)
        {
            result.push_back(groupAnagram);   
        }    

        return result;
    }
};
