/*	Merge Sorted Array
	leetcode link: https://leetcode.com/problems/merge-sorted-array/
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1, j=n-1, k=m+n-1;
        while(i>=0 && j>=0)
        {
            if(nums1[i]>nums2[j])
                nums1[k]=nums1[i--];
            else if(nums2[j]>nums1[i])
                nums1[k]=nums2[j--];
            else
            {
                nums1[k]=nums1[i--];
                nums1[--k]=nums2[j--];
            }
            k--;
        }
        while(j>=0)
        {
            nums1[k--]=nums2[j];
            j--;
        }
    }
};

/*	TC: O(m+n)
	SC: O(1)
*/
