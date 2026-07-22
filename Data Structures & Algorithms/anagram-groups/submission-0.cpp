#include <algorithm>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> Umap;
        int size = strs.size();

        for(auto& s : strs)
        {
            vector<int> count(26, 0);
            for (char c : s) {
                count[c - 'a']++;
            }

            string key;
            for(int i : count){
                key = key + "#" + to_string(i);
            }

            Umap[key].push_back(s);

        }

        vector<vector<string>> result;
        for(auto& pair : Umap){
            result.push_back(pair.second);
        }

        return result;
    }
};
