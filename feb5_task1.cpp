/*	Search insert position of K in a sorted array
	gfg link: https://practice.geeksforgeeks.org/problems/search-insert-position-of-k-in-a-sorted-array/1
*/

class Solution{
    public:
    int searchInsertK(vector<int> arr, int n, int k)
    {
        if(k<arr[0])
            return 0;
        if(k>arr[n-1])
            return n;
        int l=0, r=n-1, mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(arr[mid] == k || (arr[mid-1]<k && arr[mid]>k))
                return mid;
            else if(arr[mid]<k && arr[mid+1]>k)
                return mid+1;
            else if(arr[mid] < k)
                l=mid+1;
            else
                r=mid-1;
        }
        return mid;
    }
};

/*	TC: O(logn)
	SC: O(1)
*/
