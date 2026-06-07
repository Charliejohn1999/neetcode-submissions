class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> map;
        if (s.size() != t.size())
            return false;
        int i = 0;
        while (i < s.size()){
            map[s[i]]++;
            i++;
        }
        i = 0;
        while (i < t.size()){
            map[t[i]]--;
            if (map[t[i]] < 0)
                return false;
            i++;
        }
        return true;
    }
};
