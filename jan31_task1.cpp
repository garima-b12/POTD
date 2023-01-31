/*	Find Peak Element
	leetcode link: https://leetcode.com/problems/find-peak-element/
*/

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1)
            return 0;
        
        int l=0, r=nums.size()-1, mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(mid==0 && nums[mid]>nums[mid+1])
                return mid;
            else if(mid==nums.size()-1 && nums[mid]>nums[mid-1])
                return mid;
            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1])
                return mid;
            else if(nums[mid+1]>nums[mid])
                l=mid+1;
            else
                r=mid-1;
        }
        return mid;
    }
};

/*	TC: O(logn)
	SC: O(1)
*/
