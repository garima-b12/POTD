/* 	Move all zeroes to end of array
	Given an array arr[] of N positive integers. 
	Push all the zeros of the given array to the right end of the array while maitaining the order of non-zero elements.
	gfg link: https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1
*/

class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    int j=0;
	    //j will point to the first '0' in the array
	    //and i will iterate over the whole array and for every non-zero element found,
	    //we will swap arr[i] and arr[j]
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]!=0)
	        {
	            swap(arr[i],arr[j]);
	            j++;
	        }
	    }
	    
	}
};

/*	TC: O(n)
	SC: O(1) */
