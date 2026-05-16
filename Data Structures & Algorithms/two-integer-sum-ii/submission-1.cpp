class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int n = nums.size();
        int i = 0;
        int j = n-1;
        vector<int> res;
        while(i < j){
            if(nums[i] + nums[j] == t){
                res.push_back(i+1);
                res.push_back(j+1);
                break;
            }
            else if (nums[i] + nums[j] > t){
                j--;
            }
            else i++;
        }
        return res;
    }
};
