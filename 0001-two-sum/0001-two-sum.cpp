class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();

        unordered_map<int, int> val;

        for(int i=0; i<n; i++){

            int need = target - nums[i];

            if(val.find(need) != val.end()){
                return {val[need], i};
            }

            val[nums[i]] = i;
        }
        return {};
        
    }
};