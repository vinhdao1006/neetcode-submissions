class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> mapAnagrams;

        for (auto& x : strs)
        {
            string temp = x;
            std::sort(x.begin(), x.end());
            if (mapAnagrams.contains(x))
            {
                mapAnagrams[x].push_back(temp);
            }
            else
            {
                mapAnagrams.insert({x, { temp }});
            }
        }

        vector<vector<string>> res;

        for (auto& x : mapAnagrams)
        {
            res.push_back(x.second);
        }

        return res;
    }
};
