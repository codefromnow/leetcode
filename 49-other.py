class Solution:
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        dic = {}
        nstrs = map(lambda x: ''.join(sorted(x)), strs)
        i=0
        for key in nstrs:
            if key in dic:
                dic[key].append(strs[i])
            else:
                dic[key] = [strs[i]]
            i += 1
        lst = []
        for key, items in dic.items():
            lst.append(items)
        return lst
