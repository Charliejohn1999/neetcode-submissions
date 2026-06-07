class Solution {
public:
    bool hasDuplicate(std::vector<int>& nums) {
        // je compare chaque i  à tout le vector sauf lui meme 
        std::unordered_set<int> seen;
        int i = 0;
        while (i < nums.size()){
            if (seen.find(nums[i]) != seen.end())
                return true;
            seen.emplace(nums[i]);
            i++;
        }
        return false;
    }
};