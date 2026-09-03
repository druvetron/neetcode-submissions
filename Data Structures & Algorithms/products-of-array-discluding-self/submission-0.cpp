class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size() ;

        vector<int> ans(n,1);

        int prefix = 1 ;
        //we need to access every element and multiply it by it's perfix
        for(int i = 0  ; i <n ; i++){
            ans[i] = prefix ;
            prefix *= nums[i]; //product until that element
        }

        //multipy the suffix
        int suffix = 1 ;
        for(int i = n-1 ; i>=0 ; i--){
            ans[i] *= suffix ;
            suffix *= nums[i] ; //product until that element
        }

        return ans ;
    }
};
