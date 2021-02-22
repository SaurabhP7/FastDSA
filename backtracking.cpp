class Solution {
public:
    
    //backtracking
    
    
    
    void combine(vector<vector<int>> &ans,vector<int> candidates,vector<int> &candidate,int target,int begin){
        
        
        if(!target){
            ans.push_back(candidate)     ;
            return ;
        }
        
    for(int i=begin;i<(int)candidates.size() && target>=candidates[i];i++){
        
        candidate.push_back(candidates[i]) ;
        combine(ans,candidates,candidate,target-candidates[i],i) ;
        candidate.pop_back() ;
        
    }
         
        
    }
    
    
    
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target)     {
        
        
        sort(candidates.begin(),candidates.end()) ;
        vector<int> candidate ;    
        
        vector<vector<int>> ans ;
        
        combine(ans,candidates,candidate,target,0) ;
        
        return ans ;
        
        
    }
};