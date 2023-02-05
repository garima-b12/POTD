/*	Search in Rotated Sorted Array II
	leetcode link: https://leetcode.com/problems/search-in-rotated-sorted-array-ii/
*/

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l=0, r=nums.size()-1, mid;
        while(l<=r)
        {
            mid=(l+r)/2;

            if(nums[mid]==target)
                return true;
            
            else if(nums[l]==nums[mid] && nums[mid]==nums[r])
                l++;
            
            else if((nums[l]<nums[mid] && target>=nums[l] && target<nums[mid]) || 
            (nums[l]>nums[mid] && (target>=nums[l] || target<nums[mid])) )
                r=mid-1;

            else
                l=mid+1;
        }

        return false;
    }
};

/*	TC: O(logn) overall
	worst case: O(n)
	SC: O(1)
*/
