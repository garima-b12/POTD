/*	Duplicate Zeros
	Given a fixed-length integer array arr, duplicate each occurrence of zero, shifting the remaining elements to the right.
	Note that elements beyond the length of the original array are not written. 
	Do the above modifications to the input array in place and do not return anything.
	
	leetcode link: https://leetcode.com/problems/duplicate-zeros/
*/

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                arr.insert(arr.begin()+(i+1),0);
                i++;
            }
        }
        arr.resize(n);
    }
};

/*	TC: O(n^2)
	SC: O(n)
*/
