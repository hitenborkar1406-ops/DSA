class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> temp ;
        vector< int > nemp ;
        for( int i = 0 ; i < nums.size() ; i++ ) {
            if( nums[i] > 0 ) {
                temp.push_back(nums[i]) ;
            }
            else{
                nemp.push_back(nums[i]) ;
            }
        }
        vector< int > ans ;
        for(int i = 0; i < temp.size(); i++) {
            ans.push_back(temp[i]);
            ans.push_back(nemp[i]);
        }
        return ans ;
    }
};