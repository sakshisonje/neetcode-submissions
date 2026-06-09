class Solution {
public:

    string encode(vector<string>& strs) {
        string encodedStr;
        for(string& s:strs){
            encodedStr += to_string(s.length())+'#'+s;
        }
        return encodedStr;
    }

    vector<string> decode(string s) {
        vector<string> result;
        //10#hellostring4#leet3#tea
        //i j
        int i=0;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#') j++;
            int len=stoi(s.substr(i,j-i));
            i=j+1;
            result.push_back(s.substr(i,len));
            i=i+len;
        }
        return result;
    }
};
