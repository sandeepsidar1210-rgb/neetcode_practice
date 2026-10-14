class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        for ( int i = 0 ; i < n ; i++ ){
            int m = matrix[i].size() ;
            
            
        if(matrix[i][0] <= target && matrix[i][m - 1] >= target){

        int left = 0;
        int right = m - 1;

        while( left <= right ){

            int mid = left + (right - left)/ 2;

            if( matrix[i][mid] == target ){
                return true ;
            }

            else if( matrix[i][mid] > target ){
                right = mid - 1 ;
            }

            else{

                left = mid + 1;
            }
        }

        }

    }

return false;
}
};
