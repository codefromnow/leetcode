bool is_same(string a,string b) {
//	记录每个字符的数量
	map<char,int> num;
	int len1=a.length(),len2=b.length();
	if(len1!=len2) return false;
	for(string::iterator it=a.begin(); it!=a.end(); it++) {
		num[*it]++;
	}
	for(string::iterator it=b.begin(); it!=b.end(); it++) {
		num[*it]--;
	}
	for(map<char,int>::iterator it=num.begin(); it!=num.end(); it++) {
		if(it->second!=0) return false;
	}
	return true;
}

vector<vector<string> > groupAnagrams(vector<string>& strs) {
	vector<vector<string> > ans;
	for(vector<string>::iterator it=strs.begin(); it!=strs.end(); it++) {
		/*		vector<vector<string> >::iterator iter=ans.begin();
				for(; iter!=ans.end(); iter++) {
					if(is_same((*iter)[0],(*it))) {
						(*iter).push_back((*it));
						break;
					}
				}
				if(iter==ans.end()) {
					vector<string> tmp;
					tmp.push_back((*it));
					ans.push_back(tmp);
				}
			}
			*/
		int anslen=ans.size(),i;
		for(i=0; i<anslen; i++) {
			if(is_same(ans[i][0],(*it))) {
				ans[i].push_back((*it));
				break;
			}
		}
		if(i==anslen) {
			vector<string> tmp;
			tmp.push_back((*it));
			ans.push_back(tmp);
		}
	}
	return ans;
}
