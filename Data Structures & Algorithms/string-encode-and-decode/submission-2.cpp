class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for(string& s: strs)
        {
            int len=s.length();
            encoded+=to_string(len);
            encoded+="#";
            encoded+=s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i=0;
        while(i<s.size())
        {
            int j=i;
            while(s[j] != '#'){
                j++;
            }

            int length=stoi(s.substr(i,j-i));
            i=j+1;
            result.push_back(s.substr(i,length));
            i += length;
        }

        return result;
    }
};
