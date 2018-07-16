class Solution {
public:
    
    vector<vector<int> > combinationSum(vector<int>& candidates, int target) {
	int max_index=candidates.size()-1;
    
    vector<vector<int> > res;
    vector<int> tmp;
    find_combinationsum(max_index,res,candidates,target,0,0,tmp);
    return res;
    }
 	void find_combinationsum(int max_index,vector<vector<int> >& res,vector<int>& candidates, int target,int index,int sum,vector<int>& tmp){
        if(sum==target) {res.push_back(tmp); return ;}
        if(sum>target) return ;
        tmp.push_back(candidates[index]);
        find_combinationsum(max_index,res,candidates,target,index,sum+candidates[index],tmp);
        tmp.pop_back();
        if(index+1<=max_index) find_combinationsum(max_index,res,candidates,target,index+1,sum,tmp);
}
};
