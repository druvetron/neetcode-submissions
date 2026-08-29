class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size() ;
        //hash map
        unordered_map<int,int> seen ;


        for(int i =0 ; i<n ; i++){

            //the other number to find
            int complement = target - nums[i] ;

            //if other find return it with the current no.
            if(seen.count(complement)){
                return {seen[complement] , i} ;
            }

            //if not store the current no. in the hash 
            seen[nums[i]] = i ;

        }
        
        return {} ;

    }
};
