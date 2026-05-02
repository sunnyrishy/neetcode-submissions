class Solution {
public:
    bool can_be_eaten(vector<int>& piles, int curr, int h){
        int val = 0;
        for(int i = 0; i < piles.size(); i++){
            val += ceil((double)piles[i] / curr);
        }
        if(val <= h) return true;
        return false;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = *max_element(piles.begin(), piles.end());
        int low = 1;
        int high = maxi;
        int ans = -1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(can_be_eaten(piles, mid, h)){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
        
    }
};
