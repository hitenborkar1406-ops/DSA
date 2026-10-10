class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count_zero = 0 ;
        int count_one = 0 ;
        int count_two = 0 ;
        for( int i = 0 ; i < nums.size() ; i++ ) {
            if(nums[i] == 0 ){
                count_zero++ ;
            }
            else if(nums[i] == 1 ){
                count_one++ ;
            }
            else{
                count_two++ ;
            }
        }
        int i = 0 ;
        
        while (count_zero--) {
            nums[i++] = 0;
        }

        while (count_one--) {
            nums[i++] = 1;
        }

        while (count_two--) {
            nums[i++] = 2;
        }
    }
};