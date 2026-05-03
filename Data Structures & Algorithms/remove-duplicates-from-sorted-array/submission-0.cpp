class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()== 1) return 1;
        int i = 0;
        int j = 1;
        while(j < nums.size()){
            if(nums[i] == nums[j]){
                j++;
            }
            else{
                swap(nums[i+1], nums[j]);
                i++;
                j++;
            }
        }
        nums.resize(i+1);
        return nums.size();
    }
};