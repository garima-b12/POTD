/*	Find the Highest number
	Given an array in such a way that the elements stored in array are in increasing order initially and then after reaching to a peak element, 
	the elements stored are in decreasing order. Find the highest element.
	gfg link: https://practice.geeksforgeeks.org/problems/find-the-highest-number2259/1
*/

class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        int l=0, r=a.size()-1, mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(mid==0 && a[mid+1]<a[mid])
            {
                return a[mid];
            }
            else if(mid==a.size()-1 && a[mid-1]<a[mid])
            {
                return a[mid];
            }
            if(a[mid-1]<a[mid] && a[mid+1]<a[mid])
                return a[mid];
            else if(a[mid]<a[mid+1])
                l=mid+1;
            else
                r=mid-1;
        }
        return 0;
    }
};

/*	TC: O(log n)
	SC: O(1)
*/
