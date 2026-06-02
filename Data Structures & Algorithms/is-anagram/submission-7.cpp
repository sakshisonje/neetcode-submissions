class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map <char,int> freq;

        for(char strS:s){
            freq[strS]++;
        }
        for(char strt:t){
            freq[strt]--;
        }

        for (auto& count : freq) {
            if (count.second!=0)
                return false;
        }

        return true;

    }
};
