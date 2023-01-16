/*	Find Smallest Letter Greater Than Target
	leetcode link: https://leetcode.com/problems/find-smallest-letter-greater-than-target/
*/

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans='{';   //character with ascii value greater than all letters of alphabet
        for(int i=0;i<letters.size();i++)
        {
            if(letters[i] > target && letters[i] < ans)
                ans=letters[i];
        }
        if(ans=='{')
            return letters[0];
        return ans;
    }
};

/*	TC: O(n)
	SC: O(1)
*/
