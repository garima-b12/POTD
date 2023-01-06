/*	Union of two arrays can be defined as the common and distinct elements in the two arrays.
	Given two sorted arrays of size n and m respectively, find their union.
	Gfg link: https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1
*/

class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector<int> unionarray;
        int i=0, j=0;
        while(i<n && j<m)
        {
            if(arr1[i] < arr2[j])
            {
                if(i==0)
                    unionarray.push_back(arr1[i]);
                if(i>0 && arr1[i]!=arr1[i-1])
                    unionarray.push_back(arr1[i]);
                i++;
            }
            else if(arr1[i] == arr2[j])
            {
                if(i==0)
                    unionarray.push_back(arr1[i]);
                else if(arr1[i]!=arr1[i-1])
                    unionarray.push_back(arr1[i]);
                i++;
                j++;
            }
            else
            {
                if(j==0)
                    unionarray.push_back(arr2[j]);
                if(j>0 && arr2[j]!=arr2[j-1])
                    unionarray.push_back(arr2[j]);
                j++;
            }
        }
        while(i != n)
        {
            if(arr1[i]!=arr1[i-1])
                unionarray.push_back(arr1[i]);
            i++;
        }
        while(j != m)
        {
            if(arr2[j]!=arr2[j-1])
                unionarray.push_back(arr2[j]);
            j++;
        }
        return unionarray;
    }
};


/*	TC: O(n+m)
	SC: O(n+m) */
