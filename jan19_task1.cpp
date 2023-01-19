/*	Check if All Characters Have Equal Number of Occurrences
	leetcode link: https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/
*/

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> m;
        for(int i=0;i<s.length();i++)
            m[s[i]]++;
        
        int ctr = m.begin()->second;
        for(auto itr=m.begin();itr!=m.end();itr++)
            if(itr->second != ctr)
                return false;
        return true;
    }
};

/*	TC : O(n)
	SC : O(n)
*/
