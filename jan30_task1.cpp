/*	Number of Sub-arrays of Size K and Average Greater than or Equal to Threshold
	leetcode link: https://leetcode.com/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold/
*/

class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        
        int sum=0, thresh=k*threshold, ctr=0;
        for(int i=0;i<k;i++)
            sum+=arr[i];
        if(sum >= thresh)
            ctr++;

        for(int i=k;i<arr.size();i++)
        {
            sum-=arr[i-k];
            sum+=arr[i];
            if(sum >= thresh)
                ctr++;
        }
        return ctr;

    }
};

/*	TC: O(n)
	SC: O(1)
*/	
