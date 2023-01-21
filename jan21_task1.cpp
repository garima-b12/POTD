/*	Valid Palindrome
	leetcode link: https://leetcode.com/problems/valid-palindrome/
*/

class Solution {
public:
    bool isPalindrome(string s) {
        bool b;
        int l=0, r=s.size();
        while(l<=r)
        {
            if(!isalnum(s[l]))
                l++;
            else if(!isalnum(s[r]))
                r--;
            
            else if(tolower(s[l])!=tolower(s[r]))
                return false;
            else    
                l++, r--;
        }
        return true;
    }
};

/*	TC: O(n)
	SC: O(1)
*/
