/*	Substrings of Size Three with Distinct Characters
	leetcode link: https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/
*/

class Solution {
public:
    int countGoodSubstrings(string s) {
        unordered_map<char,int> m;
        int good=0;
        for(int i=0;i<3;i++)
            m[s[i]]++;

        if(m.size() == 3)
            good++;

        for(int i=3;i<s.length();i++)
        {
            m[s[i-3]]--;
            if(m[s[i-3]] == 0)
                m.erase(s[i-3]);
            m[s[i]]++;
            if(m.size() == 3)
                good++;
        }
        return good;
    }
};

/*	TC: O()
	SC: O()
*/
