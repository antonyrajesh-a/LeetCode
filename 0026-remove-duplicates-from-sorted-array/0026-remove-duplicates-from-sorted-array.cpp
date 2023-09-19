class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        vector<int> :: iterator it1 = nums.begin() ;
        vector<int> :: iterator it2 = nums.begin() + 1 ;
        
        int i=0;
        
        while ( it2 != nums.end() ){
            
            if ( *it1 == *it2 ) it2++;
            
            else{
                
                it1++; 
                i++;
                *it1 = *it2;
            }
            
        }
        
        return i+1;
        
        
    }
};