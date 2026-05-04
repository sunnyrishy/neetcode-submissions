class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        if(target > nums[n-1]) return n;
        if(target < nums[0]) return 0;
        int low = 0;
        int high = n-1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target) return mid;
            if(nums[mid]< target && nums[mid+1] >= target){
                return mid + 1;
            }
            else if (nums[mid+1] < target) low = mid + 1;
            else high = mid -1;
        }
        return -1;
    }
};