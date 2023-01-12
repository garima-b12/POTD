/*	Count Prefixes of a Given String
	You are given a string array words and a string s, where words[i] and s comprise only of lowercase English letters.
	Return the number of strings in words that are a prefix of s.
	A prefix of a string is a substring that occurs at the beginning of the string. A substring is a contiguous sequence of characters within a string.
	 
	leetcode link: https://leetcode.com/problems/count-prefixes-of-a-given-string/
*/

class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count=0;
        for(int i=0;i<words.size();i++)
        {
            if(words[i].length() <= s.length())
            {
                int j;
                for(j=0;j<words[i].length();j++)
                {
                    if(words[i][j] != s[j])
                        break;
                }
                if(j == words[i].length())
                    count++;
            }    
        }
        return count;
    }
};

/*	TC: O(n*s)
	SC:O(1)
*/
