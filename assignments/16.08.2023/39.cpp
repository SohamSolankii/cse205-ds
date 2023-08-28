class Solution {
public:

    void Sum(vector<int>& candidates, int target, vector<vector<int> >& res, vector<int>& r, int i)
    {
        
        if(target == 0)
        {
            // if we get exact answer
            res.push_back(r);
            return;
        }
        
        while(i <  candidates.size() && target - candidates[i] >= 0)
        {
            
            r.push_back(candidates[i]);
            
            // recur for next numbers
            Sum(candidates,target - candidates[i],res,r,i);
            ++i;
            
            // Remove number from vector (backtracking)
            r.pop_back();
        }
}
    
     
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        
        // remove duplicates
        candidates.erase(unique(candidates.begin(),candidates.end()),candidates.end());
        
        vector<int> r;
        vector<vector<int> > res;
        
        Sum(candidates,target,res,r,0);
        
        return res;
    }
};