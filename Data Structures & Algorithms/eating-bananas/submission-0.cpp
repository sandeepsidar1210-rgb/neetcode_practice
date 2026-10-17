class Solution {
public:


    long long func(vector <int>& piles , int k){
        long long total_hrs = 0 ;
        for ( int i =0 ; i < piles.size() ; i++){
            total_hrs = total_hrs + ((long long )piles[i] + k - 1) / k; 
        }

        return total_hrs;
    }


    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin() , piles.end());
        int ans = high ;

        while( low <= high ){
            int mid = low + (high - low)/2 ;

            long long total_hrs = func( piles , mid );

            if ( total_hrs <= h ){
                ans = mid ;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;

    }
};
