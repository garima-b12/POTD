/*	Sqrt(x)
	leetcode link: https://leetcode.com/problems/sqrtx/
*/

class Solution {
    public int mySqrt(int x) {
        if(x==0)
            return 0;
        if(x==1)
            return 1;
        int start=1, end=x/2, mid=0;
        while(start<=end)
        {
            mid=(start+end)/2;
            if((long)mid*mid==x)
                return mid;
            else if((long)mid*mid<x)
                start=mid+1;
            else
                end=mid-1;
        }
        return end;
        
    }
}

/*	TC: O(logn)
	SC: O(1)
*/
