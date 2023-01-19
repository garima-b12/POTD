/*	Increasing Decreasing String
	leetcode link: https://leetcode.com/problems/increasing-decreasing-string/
*/

class Solution {
public:
    string sortString(string s) {
        string ans;
        int freq[26]={0};
        for(int i=0;i<s.length();i++)
            freq[s[i]-'a']++;

        while(ans.size() != s.size())
        {
            for(int i=0;i<26;i++)
                if(freq[i])
                {
                    ans += 'a'+i;
                    freq[i]--;
                }
            for(int i=25;i>=0;i--)
                if(freq[i])
                {
                    ans += 'a'+i;
                    freq[i]--;
                }
        }
        return ans;
    }
};

/*	TC : O(n)
	SC : O(n)
*/
