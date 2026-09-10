class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string root = "";
        bool isDif = false;

        for (int i = 0; i < strs[0].length(); ++i)
        {           
            for (int j = 1; j < strs.size(); ++j)
            {
                if (strs[0][i] != strs[j][i])
                {
                    isDif = true;
                    break;
                }
            }

            if (isDif)
                break;

            root += strs[0][i];
        }

        return root;
    }
};