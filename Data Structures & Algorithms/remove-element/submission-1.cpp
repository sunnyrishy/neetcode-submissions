class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        if(n == 0) return 0;
        int low = 0;
        int high = n-1;
        while(nums[high] == val){
            high--;
        }        
        while(low <= high){
            if(nums[low] == val){
                swap(nums[low], nums[high]);
                low++;
                high--;
                while(nums[high] == val){
                    high--;
                }
            }
            else low++;
        }
        return low;
    }
};