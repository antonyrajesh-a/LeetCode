class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        //Moore's Voting algorithm
        
        int count = 0 , candidate = 0;
        
        for ( auto e : nums ){
            if ( count == 0 ) candidate = e;
            if ( e == candidate ) count++;
            else count--;    
        }
        return candidate;    
    }
};