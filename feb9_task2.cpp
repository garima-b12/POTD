/*	Find All Anagrams in a String
	leetcode link: https://leetcode.com/problems/find-all-anagrams-in-a-string/
*/

class Solution {
public:
    unordered_map<char,int> m;

    bool areEqual()
    {
        for(auto itr:m)
        {
            if(itr.second!=0)
                return false;
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        
        vector<int> ans;
        int k=p.length();
        if(s.length()<k)
            return ans;
        
        for(int i=0;i<k;i++)
            m[p[i]]++;

        for(int i=0;i<k;i++)
        {
            m[s[i]]--;
        }
        if(areEqual())
            ans.push_back(0);

        for(int i=k;i<s.length();i++)
        {
            m[s[i]]--;
            m[s[i-k]]++;
            if(areEqual())
                ans.push_back(i-k+1);
        }

        return ans;
    }
};

/*	TC: O(length(s)*length(p))
	SC: O(length(p))
*/
