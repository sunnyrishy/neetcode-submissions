class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(); //number of rows
        int n = matrix[0].size(); //number of cols;
        for(int i = 0; i < matrix.size(); i++){
            if(target > matrix[i][n-1]) continue;
            else{
                int low = 0;
                int high = n-1;
                while(low <= high){
                    int mid = low + (high-low)/2;
                    int num = matrix[i][mid];
                    if(num == target) return true;
                    else if (num < target) low = mid + 1;
                    else high = mid - 1;
                }
            }
        }
        return false;

        
    }
};
