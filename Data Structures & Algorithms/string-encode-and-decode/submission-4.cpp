class Solution {
public:

    string encode(vector<string>& strs) {
        string enc;
        for(string& s:strs) enc=enc+to_string(s.length())+"#"+s;
        return enc;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i=0;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#') j++;
            int length = stoi(s.substr(i,j-i));
            i=j+1;
            res.push_back(s.substr(i,length));
            i+=length;
        }
        return res;
    }
};
