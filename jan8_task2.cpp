/*	Find the element that appears once
	Given a sorted array A[] of N positive integers having all the numbers occurring exactly twice, 
	except for one number which will occur only once. Find the number occurring only once.
	gfg link: https://practice.geeksforgeeks.org/problems/element-appearing-once2552/1
*/

class Solution{
public:	
    int appear_once(int A[], int l, int r)
    {
        while(l<=r)
        {
            if(l==r)
                return A[l];
           
	        int mid=(l+r)/2;
	        
	        //if mid is even, and arr[mid]==arr[mid+1], it means mid is before the required 
	        //element so reduce search space to (mid+2,r), else mid is after required element
	        if(mid%2==0)
	        {
	            if(A[mid] == A[mid+1])
	                l=mid+2;
	            else
	                r=mid;
	        }
	        
	        //if mid is odd, and arr[mid]==arr[mid-1], it means mid is before the required
	        //element so reduce the search space to (mid+1,r), else mid is after required element
	        else
	        {
	            if(A[mid] == A[mid-1])
	                l=mid+1;
	            else
	                r=mid-1;
	        }
        }
        return 0;
	        
    }
	int search(int A[], int N){
	    //All elements before the required have the first occurrence at even index (0, 2, ..) 
	    //and the next occurrence at odd index (1, 3, …). 
	    //And all elements after the required have the first occurrence at an odd index 
	    //and the next occurrence at an even index. 
	    return appear_once(A,0,N-1);
	}
};

/*	TC: O(log n)
	SC: O(1)
*/
