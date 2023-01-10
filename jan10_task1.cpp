/*	Wave Array
	Given a sorted array arr[] of distinct integers. Sort the array into a wave-like array(In Place).
	In other words, arrange the elements into a sequence such that arr[1] >= arr[2] <= arr[3] >= arr[4] <= arr[5].....
	If there are multiple solutions, find the lexicographically smallest one.
	
	gfg link: https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1
*/

void convertToWave(int n, vector<int>& arr)
{
        
    if(n==1)
        return;
    for(int i=1;i<n;i+=2)
        swap(arr[i],arr[i-1]);
        
}

/*	TC:(n)
	SC: O(1)
*/
