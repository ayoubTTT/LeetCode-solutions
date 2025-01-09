class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int len = words.size();
        int count = 0;

        for(int i = 0; i < len; i++)
        {
            int lenP = pref.size();
            if(pref == words[i].substr(0, lenP))
                count++;
        }
        return (count);
    }
};
