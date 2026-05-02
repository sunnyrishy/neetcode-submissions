class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size()-1;
        int low = 0;
        int high = n;
        int ans = -1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target){
                ans = mid;
                break;
            }
            else if (nums[mid] < target){
                low = mid + 1;
            }
            else high = mid -1;
        }
        return ans;
    }
};
