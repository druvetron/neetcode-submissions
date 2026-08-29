class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size()!= t.size()) return false ; 

        int n = s.size() ;

        unordered_map<char, int> mpp ;

        //hash filled
        for(char c : s){
            mpp[c]++ ;
        }

        for(char c : t){
            mpp[c]-- ;
            if(mpp[c]<0){
                return false ;
            }
        }

        return true ;
        
    }
};
