class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mapStr;

        for(string& word:strs)
        {
            string sortstr=word;
            sort(sortstr.begin(),sortstr.end());
            mapStr[sortstr].push_back(word);
        }
        vector<vector<string>> result;

        for(auto&[key, group] : mapStr)
        {
            result.push_back(group);
        }
        return result;
    }
};
