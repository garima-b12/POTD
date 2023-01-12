/*	First element to occur k times
	Given an array of N integers. Find the first element that occurs at least K number of times.
	 If the answer is not present in the array, return -1.
	 
	gfg link: https://practice.geeksforgeeks.org/problems/first-element-to-occur-k-times5150/1
*/

class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            m[a[i]]++;
            if(m[a[i]]==k)
                return a[i];
        }
        return -1;
        
    }
};

/*	TC: O(n)
	SC:O(n)
*/
