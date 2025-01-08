class Solution {
public:
    bool isPrefixAndSuffix(string str1, string str2)
    {
        int len1 = str1.size();
        int len2 = str2.size();
        int flag = 0;
        
        if (len1 > len2)
            return (false);
        if(str2.substr(0, len1) == str1)
            flag++;
        if(str2.substr(len2 - len1, len2) == str1)
            flag++;
        if(flag == 2)
            return(true);
        return (false);
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int len = words.size();
        int count = 0;

        for(int i = 0; i < len - 1; i++)
        {
            for(int j = i + 1; j < len; j++)
            {
                if (isPrefixAndSuffix(words[i], words[j]))
                    count++;
            }
        }
        return (count);
    }
};
