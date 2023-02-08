/*	Find Minimum in Rotated Sorted Array
	leetcode link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
*/

class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0, r=nums.size()-1, mid;
        if(nums.size()==1)
            return nums[0];
        while(l<r)
        {
            mid=(l+r)/2;
            if(nums[l]<nums[r])
                return nums[l];
            else if(nums[l]>nums[mid])
                r = mid;
            else
                l = mid+1;
        }
        return nums[l];
    }
};

/*	TC: O(logn)
	SC: O(1)
*/
