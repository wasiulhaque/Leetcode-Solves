class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int>map;
        vector<int>v;
        for(int i=0; i<nums.size(); i++){
            int remaining = target - nums[i];
            if(map.find(remaining) != map.end()){
                v.push_back(map.find(remaining)->second);
                v.push_back(i);
                break;
            }
            map.insert(pair<int, int>(nums[i], i));
        }
        return v;
    }
};
