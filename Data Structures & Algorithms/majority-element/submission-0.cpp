class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 1;
        int el = nums[0];
        for(int i = 1; i < n; i++){
            if(nums[i] == el) count++;
            else{
                count--;
                if(count < 0){
                    el = nums[i];
                    count += 2;
                }
            }
        }
        return el;
        
    }
};