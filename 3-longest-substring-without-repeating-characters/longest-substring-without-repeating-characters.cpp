class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string temp = "";
        int ans = 0 ; 
        for ( int i = 0 ; i < s.size() ; i++ ) {
            while( temp.find(s[i]) != string::npos ){
                temp.erase(0, 1) ;
            }
            temp = temp + s[i] ;
            ans = max ( ans , (int)temp.size() ) ;
        }
        return ans ;
    }
};