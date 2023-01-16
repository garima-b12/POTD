/*	Guess Number Higher or Lower
	leetcode link: https://leetcode.com/problems/guess-number-higher-or-lower/
*/

class Solution {
public:
    int guessNumber(int n) {
        long long int low=1, high=n, mid, g;
        while(low<=high)
        {
            mid=(low+high)/2;
            g=guess(mid);
            if(g==0)
                return mid;
            else if(g==1)
            {
                low=mid+1;
            }
            else
                high=mid-1;
        }
        return mid;
    }
};

/*	TC: O(log n)
	SC: O(1)
*/
