class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> mapAnagrams;

        vector<vector<string>> res;

        for (auto& x : strs)
        {
            string temp = x;
            std::sort(x.begin(), x.end());
            mapAnagrams[x].push_back(temp);
        }


        for (auto& x : mapAnagrams)
        {
            res.push_back(x.second);
        }

        return res;
    }
};
