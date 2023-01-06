/*	Given an array arr[] of size N, check if it is sorted in non-decreasing order or not. 
	Gfg link: https://practice.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1
*/

class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        for(int i=0;i<n-1;i++)
        {
            if(arr[i] > arr[i+1])
                return 0;
        }
        return 1;
    }
};

/*	TC: O(n)
	SC: O(1) */
