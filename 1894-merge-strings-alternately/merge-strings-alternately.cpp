class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string temp = "" ;
        int n = word1.size() ;
        int m = word2.size() ;
        int i = 0 ;
        int j = 0 ;
        while ( i < n && j < m ) {
            temp = temp + word1[i] + word2[j] ;
            i++ ;
            j++ ;
        }
        while ( i < n && j == m ) {
            temp = temp + word1[i] ;
            i++ ;
        }
        while (  i == n && j < m ) {
            temp = temp + word2[j] ;
            j++ ;
        }
        return temp ;
    }
};