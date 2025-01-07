class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        
        int len = words.size();
        vector<string> res;
        // set<string> ;
        
        for(int i = 0; i < len; i++)
        {
            for(int j = 0; j < len; j++)
            {
                if(i != j && words[j].find(words[i]) != string::npos)
                {
                    res.push_back(words[i]);
                    break;
                }
            }
        }
        return (res);
    }
};
