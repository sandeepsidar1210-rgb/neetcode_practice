class Solution {
public:
    int characterReplacement(string s, int k) {
        int right = 0 ;
        int left = 0;
        vector <int> count(26 , 0);
        int ans = 0;
        int maxFrequency = 0;

        while( right < s.size()){
            count[s[right] - 'A']++;
            maxFrequency = max(maxFrequency, count[s[right] - 'A']);


            while( (right - left + 1 ) - maxFrequency > k ){
                count[s[left] - 'A']--;
                left++;
            }

            ans = max( ans , right - left + 1 );
            right++ ;
        }


        return ans;
}

};