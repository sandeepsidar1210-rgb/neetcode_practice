class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector <int> ans(n , 1);

        //using prefix and suffice method.

        //prefix 
        int prefix = 1;
        for ( int i =0 ; i < n ; i++){
            ans[i] = prefix;
            prefix = prefix * nums[i];
        }

        //suffice
        int suffice = 1;
        for ( int i = n - 1 ; i >= 0 ; i--){
            ans[i] = ans[i] * suffice;
            suffice = suffice * nums[i];
        }
      
        return ans;
    }
};
