/*	Given an array arr[] sorted in ascending order of size N and an integer K. Check if K is present in the array or not.
	gfg link: https://practice.geeksforgeeks.org/problems/who-will-win-1587115621/1
*/

int searchInSorted(int arr[], int N, int K) 
    { 
    
        // binary search
        int l=0, r=N-1, mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(K == arr[mid])
                return 1;
            else if(arr[mid] < K)
                l=mid+1;
            else
                r=mid-1;
        }
        return -1;
       
    }
    
/*	TC: O(log N)
	SC: O(1) */
