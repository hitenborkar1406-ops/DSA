class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map< char , int > freq ;
        int count = 0 ;
        for ( char c : chars ) {
            freq[c]++  ;
        }
        for ( string word : words ) {
            unordered_map< char , int > temp ;
            for( char c : word ) {
                temp[c]++ ;
            }
            bool good = true ;
            for( auto p : temp ) {
                if(p.second > freq[p.first]){
                    good = false ;
                    break ;
                }
            }
            if(good){
                count = count + word.size() ;
            }
        }
        return count ;
    }
};