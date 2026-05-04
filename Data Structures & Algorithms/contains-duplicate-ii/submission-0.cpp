class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> mpp;
        for(int i = 0; i < nums.size(); i++){
            if (mpp.find(nums[i]) != mpp.end()){
                int b = mpp.find(nums[i])->second;
                if(abs(i-b) <= k) return true;
            }
            mpp[nums[i]] = i;
        }
        return false;
    }
};