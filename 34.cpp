class Solution {
public:
   vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> res;
	vector<int>::iterator it=lower_bound(nums.begin(),nums.end(),target);
    if((nums.size()==0)||(it==nums.end())||(*it!=target)){
    	res.push_back(-1);
    	res.push_back(-1);
    	return res;
	}
	else{
		res.push_back((it-nums.begin()));
		it=upper_bound(nums.begin(),nums.end(),target);
		res.push_back((it-nums.begin())-1);
		return res;
	}
}
};
