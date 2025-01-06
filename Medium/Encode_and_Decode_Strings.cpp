class Solution {
public:

    static string encode(vector<string>& strs) {
        string result;
        size_t len = strs.size();

        for(int i = 0; i < len; i++)
            result += strs[i] + "\x03";
        return (result);
    }

    static vector<string> decode(string s) {
        vector<string> result;
        int start = 0;
        int end = 0;

        while((end = s.find('\x03')) != string::npos)
        {
            result.push_back(s.substr(start, end));
            s = s.substr(end + 1);
        }
        return(result);
    }
};

