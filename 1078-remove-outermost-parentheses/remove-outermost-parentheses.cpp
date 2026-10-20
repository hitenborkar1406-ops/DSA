class Solution {
public:
    string removeOuterParentheses(string s) {
        int depth = 0 ;
        string ans =  "" ;
        int j = 0 ;
        for(  int i = 0 ; i < s.size() ; i ++ ) {
            if( s[i] == '(') {
                depth++ ;
                if( depth > 1 ) {
                    ans = ans + s[ i ] ;
                }
            }
            else if ( s[i] == ')' ) {
                depth-- ;
                if(depth >= 1 ) {
                    ans = ans + s[ i ] ;
                }
            }
            else{
                continue ;
            }
        }
        return ans ; 
    }
};