/*	Maximum Number of Words Found in Sentences
	You are given an array of strings sentences, where each sentences[i] represents a single sentence.
	Return the maximum number of words that appear in a single sentence.
	leetcode link: https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/
*/

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max_words=0;
        for(auto s:sentences)
        {
            int ctr=0;
            for(int i=0;i<s.length();i++)
            {
                if(s[i]==' ' || i==s.length()-1)
                    ctr++;
            }
            max_words=max(ctr,max_words);
        }
        return max_words;
    }
};

/*	TC: O(n)
	SC: O(1)
*/
