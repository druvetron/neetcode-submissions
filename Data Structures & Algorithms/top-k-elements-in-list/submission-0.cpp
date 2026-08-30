class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        //used to count the freq of each element 
        
        unordered_map<int , int> freq ;

        for(int num : nums){
            freq[num]++ ;
        }
        //1->2 , 2->2 , 3->3

        //freq bucket of size - n+1 , since max occurence of any element can be 6
        int n = nums.size() ;
        vector<vector<int>> buckets(n+1) ;
        for(auto& [num,freq] : freq){
            buckets[freq].push_back(num) ;
        }

        vector<int> ans ;
        for (int i = n; i >= 1 && ans.size() < k; i--) {
            for (int num : buckets[i]) {
                ans.push_back(num);
                if (ans.size() == k) return ans;
            }
        }

       
        return ans ;
    }
};
