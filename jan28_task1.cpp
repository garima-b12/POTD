/*	Find the K-Beauty of a Number
	leetcode link: https://leetcode.com/problems/find-the-k-beauty-of-a-number/
*/

class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s=to_string(num);
        int div=0;
        for(int i=0; i<s.length()-k+1; i++)
        {
            int temp=stoi(s.substr(i,k));
            if(temp==0)
                continue;
            if(num%temp == 0)
                div++;
        }
        return div;
    }
};

/*	TC: O(len(num))
	SC: O(len(num)*k)
*/
