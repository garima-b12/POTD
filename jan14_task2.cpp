/*	Search Insert Position
	Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, 
	return the index where it would be if it were inserted in order. You must write an algorithm with O(log n) runtime complexity.
	
	leetcode link: https://leetcode.com/problems/search-insert-position/
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0, r=nums.size()-1, mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target)
            {
                if(mid+1<nums.size() && nums[mid+1]>target)
                    return mid+1;
                l=mid+1;
            }
            else
            {
                if(mid-1>=0 && nums[mid-1]<target)
                    return mid;
                r=mid-1;
            }
        }
        if(l==0)
            return 0;
        else
            return nums.size();
    }
};

/*	TC: O(n)
	sc: O(1)
*/
