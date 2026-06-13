class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        while (i < nums.size()){
            int y = i +1;
            while (y < nums.size()){
                if (nums[i] + nums[y] == target){
                    std::vector<int> res;
                    res.push_back(i);
                    res.push_back(y);
                    return res;
                }
                y++;
            }
            i++;
        }
    }
};
