class Solution {
public:

    string encode(vector<string>& strs) {

        string res = "";
        for (const string& str : strs ){
            res = res + to_string(str.length()) + "#" + str;
        }
    
        return res ;
    }

    vector<string> decode(string s) {

        vector <string> res;

        int i = 0;
        int n = s.length() ;

        while( i < n ){
            int j = i ;
            while( s[j] != '#'){
                j++;
            }

            int len = stoi( s.substr(i , j-i ));

            string str = s.substr( j + 1 , len );

            res.push_back(str);

            i = 1 + len + j;

        } 
    return res;
    }
};
