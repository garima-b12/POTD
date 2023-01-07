/*	Complete the function missingNumber() which takes the array A[] and its size N as inputs and returns the missing number in 1 to N.
	gfg link: https://practice.geeksforgeeks.org/problems/missing-number4257/1
*/

int missingNumber(int A[], int N)
{
    //find sum of first n natural numbers
    //then subtract the sum of all elements of array from this sum
    //to get the missing number
    long sum=0;
    for(int i=0;i<N-1;i++)
        sum+=A[i];
    return (N*(N+1))/2-sum;
}s
    
/*	TC: O(N)
	SC: O(1) */
