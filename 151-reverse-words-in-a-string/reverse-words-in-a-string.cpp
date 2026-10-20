// class Solution {
// public:
//     string reverseWords(string s) {
//         string ans = "";
//         int j = s.size() ;
//         for( int i = s.size() - 1 ; i >= 0 ; i-- ) {
//             if( s[i] == ' ') {
//                 if ( j > i + 1 ) {
//                     ans = ans + s.substr(i + 1 , j - i - 1) ;
//                     ans = ans + " " ;
//                 }
//                 j = i ;
//             }
//         }
//         if( j > 0 ) {
//             ans = ans + s.substr(0, j ) ;
//         }
//         if (!ans.empty() && ans.back() == ' ') {
//             ans.pop_back();
//         }
//         return ans ;
//     }
// };


class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s) ;
        string word ;
        string ans = "";
        while ( ss >> word ) {
            ans = word + ( ans.empty() ? "" : " " + ans ) ;
        }
        return ans ;
    }
};
