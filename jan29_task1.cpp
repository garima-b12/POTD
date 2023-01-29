/*	Reverse Words in a String III
	leetcode link: https://leetcode.com/problems/reverse-words-in-a-string-iii/
*/

class Solution {
public:
    string reverseWords(string s) {
        int j=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                reverse(s.begin()+j, s.begin()+i);
                j=i+1;
            }
            else if(i==s.length()-1)
                reverse(s.begin()+j, s.end());
        }
        return s;
    }
};

/*	TC: O(n)
	SC: O(1)
*/
