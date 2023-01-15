/*	First Bad Version
	leetcode link: https://leetcode.com/problems/first-bad-version/
*/

class Solution {
public:
    int firstBadVersion(int n) {
        
        long int l = 1, r = n;
        while(l<r)
        {
            long int mid=(l+r)/2;
            if(isBadVersion(mid))
                r=mid;
            else
                l=mid+1;
        }
        return l;
    }
};

/*	TC: O(log n)
	SC: O(1)
*/
