class Solution {
    unordered_map<string, vector<string>> anagrams;
    vector<vector<string>> result;
    
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        for (auto s : strs) {
            string key = s;
            sort(key.begin(), key.end());
            anagrams[key].push_back(s);
        }
        
        for (auto m : anagrams) {
            sort(m.second.begin(), m.second.end());
            result.push_back(m.second);
        }
        
        return result;
    }
};
