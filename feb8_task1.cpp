/*	Factorial Trailing Zeroes
	leetcode link: https://leetcode.com/problems/factorial-trailing-zeroes/
*/

//Solution 1
class Solution {
public:
    int trailingZeroes(int n) {
        int zeros=(n/5)+(n/25)+(n/125)+(n/625)+(n/3125);
        return zeros;
    }
};
/*	TC: O(1)
	SC: O(1)
*/

//Solution 2
class Solution {
public:
    int trailingZeroes(int n) {
        int zeros=0;
        while(n/5 > 0)
        {
            zeros+=(n/5);
            n=n/5;
        }
        return zeros;
    }
};
/*	TC: O(logn(base5))
	SC: O(1)
*/
