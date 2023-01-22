/*	Isomorphic Strings
	leetcode link: https://leetcode.com/problems/isomorphic-strings/
*/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map <char,char> m;
        for(int i=0;i<s.length();i++)
        {
            if(m.find(s[i]) != m.end())
            {
                if(m[s[i]] != t[i])
                    return false;
            }
            else
                m.insert({s[i], t[i]});
        }
        
        unordered_map<char,int> mp;
        for(auto itr=m.begin();itr!=m.end();itr++)
        {
            mp[itr->second]++;
            if(mp[itr->second] > 1)
                return false;
        }
        return true;
    }
};

/*	TC: O(n)
	SC: O(n)
*/
